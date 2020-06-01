#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "queue.h"
#include "queueTemp.h"
#define num1 5
#define num2 6

struct position
{
    int x;
    int y;
};

typedef struct position Posi;

int matrix[num1][num2];
int visitedNumber[num1][num2];
Posi prev[num1][num2];
QueueTemp queueOrder[num1][num2];

/*
建立5*6矩阵
0 0 0 0 0 0
0 2 1 3 0 0
0 1 2 4 0 0
0 3 4 5 0 0
0 0 0 0 0 0
为解决边界问题，可以在矩阵周围添加一圈0

 */
void createMatrix()
{
    for(int i=0; i<num1; i++)
    {
        for(int j=0; j<num2; j++)
        {
            matrix[i][j]=0;
        }
        matrix[1][1]=2;
        matrix[1][2]=1;
        matrix[1][3]=3;
        matrix[2][1]=1;
        matrix[2][2]=2;
        matrix[2][3]=4;
        matrix[3][3]=5;
        matrix[3][1]=3;
        matrix[3][2]=4;
    }
}

//初始化
void init()
{
    for(int i=0; i<num1; i++)
    {
        for(int j=0; j<num2; j++)
        {
            visitedNumber[i][j]=0;
            InitQueueTemp(&queueOrder[i][j]);
            prev[i][j].x=-1;
            prev[i][j].y=-1;
        }
    }
}

//判断是否能连接
int canConnect(int a,int b,int c,int d)
{
    int x,y;
    int direction;
    int mark;
    init();
    Queue* Q=(Queue*)malloc(sizeof(Queue));
    InitQueue(Q);
    Enqueue(Q,a,b,0,0);
    visitedNumber[a][b]++;
    EnqueueTemp(&queueOrder[a][b],-1,-1,0);
    while(!isEmpty(Q))
    {
        node* nod=Q->head;
        x=nod->x;
        y=nod->y;
        direction=nod->direction;
        //判断上方是否有空位
        if(x!=0&&direction!=3)
        {
            if(matrix[x-1][y]==0||x-1==c&&y==d)
            {
                mark=nod->mark;
                if(direction!=1&&direction!=0)
                {
                    mark++;
                }
                if(mark<3)
                {
                    //printf("1(%d,%d)->",x-1,y);
                    visitedNumber[x-1][y]++;
                    EnqueueTemp(&queueOrder[x-1][y],x,y,visitedNumber[x][y]);

                    Enqueue(Q,x-1,y,1,mark);
                    if(x-1==c&&y==d)
                        break;
                }
            }
        }
        //判断下方是否有空位
        if(x!=num1-1&&direction!=1)
        {
            if(matrix[x+1][y]==0||x+1==c&&y==d)
            {
                mark=nod->mark;
                if(direction!=3&&direction!=0)
                {
                    mark++;
                }
                if(mark<3)
                {
                    //printf("3(%d,%d)->",x+1,y);
                    visitedNumber[x+1][y]++;
                    EnqueueTemp(&queueOrder[x+1][y],x,y,visitedNumber[x][y]);

                    Enqueue(Q,x+1,y,3,mark);
                    if(x+1==c&&y==d)
                        break;
                }
            }
        }
        //判断左方是否有空位
        if(y!=0&&direction!=2)
        {
            if(matrix[x][y-1]==0||x==c&&y-1==d)
            {
                mark=nod->mark;
                if(direction!=4&&direction!=0)
                {
                    mark++;
                }
                if(mark<3)
                {
                    //printf("4(%d,%d)->",x,y-1);
                    visitedNumber[x][y-1]++;
                    EnqueueTemp(&queueOrder[x][y-1],x,y,visitedNumber[x][y]);

                    Enqueue(Q,x,y-1,4,mark);
                    if(x==c&&y-1==d)
                        break;
                }
            }
        }
        //判断右方是否有空位
        if(y!=num2-1&&direction!=4)
        {
            if(matrix[x][y+1]==0||x==c&&y+1==d)
            {
                mark=nod->mark;
                if(direction!=2&&direction!=0)
                {
                    mark++;
                }
                if(mark<3)
                {
                    //printf("2(%d,%d)->",x,y+1);
                    visitedNumber[x][y+1]++;
                    EnqueueTemp(&queueOrder[x][y+1],x,y,visitedNumber[x][y]);

                    Enqueue(Q,x,y+1,2,mark);
                    if(x==c&&y+1==d)
                        break;
                }
            }
        }
        DeQueue(Q);
    }


    if(visitedNumber[c][d]==0)
    {
        return 0;
    }
    else
    {
        int m=c;
        int n=d;
        nod* Nod;
        Nod=getNod(&queueOrder[c][d],visitedNumber[c][d]);
        int Num=visitedNumber[m][n];
        while(Nod->x!=-1)
        {
            prev[m][n].x=Nod->x;
            prev[m][n].y=Nod->y;
            m=Nod->x;
            n=Nod->y;
            Num=Nod->Order;
            Nod=getNod(&queueOrder[m][n],Num);
        }
        return 1;
    }
}

//给出提示
int canHint()
{
    for(int i=0; i<num1; i++)
    {
        for(int j=0; j<num2; j++)
        {
            for(int m=i; m<num1; m++)
            {
                for(int n=0; n<num2; n++)
                {
                    if(matrix[i][j]!=0&&matrix[i][j]==matrix[m][n]&&(i!=m||j!=n))
                    {
                        //printf("(%d,%d)->(%d,%d)",i,j,m,n);
                        if(canConnect(i,j,m,n))
                        {
                            int o,p;
                            int x=m;
                            int y=n;
                            printf("(%d,%d)->",m,n);
                            while(prev[x][y].x!=i||prev[x][y].y!=j)
                            {

                                o=prev[x][y].x;
                                p=prev[x][y].y;
                                //输出所有拐点
                                if(abs(prev[o][p].x-x)==1&&abs(prev[o][p].y-y)==1)
                                    printf("(%d,%d)->",o,p);
                                x=o;
                                y=p;
                            }
                            printf("(%d,%d)",i,j);
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

//重置，交换位置
void change()
{
    int number=0;
    //获得当前剩下的图片数
    for(int i=0; i<num1; i++)
    {
        for(int j=0; j<num2; j++)
        {
            if(matrix[i][j]>0)
                number++;
        }
    }
    srand(time(NULL));
    while(!canHint())
    {
        //获取两个不同的随机编号
        int number1=rand()%number;
        int number2=rand()%number;
        while(number2==number1)
            number2=rand()%number;
        int x1,y1,x2,y2;
        int Num=-1;
        for(int i=0; i<num1; i++)
        {
            for(int j=0; j<num2; j++)
            {
                if(matrix[i][j]>0)
                {
                    Num++;
                    if(number1==Num)
                    {
                        x1=i;
                        y1=j;
                    }
                    if(number2==Num)
                    {
                        x2=i;
                        y2=j;
                    }
                }
            }
        }
        int temp=matrix[x1][y1];
        matrix[x1][y1]=matrix[x2][y2];
        matrix[x2][y2]=temp;
    }
}


int main()
{
    createMatrix();
    printf("原图片数组如下：\n");
    for(int i=0; i<num1; i++)
    {
        for(int j=0; j<num2; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    change();
    printf("交换后的图片数组如下：\n");
    for(int i=0; i<num1; i++)
    {
        for(int j=0; j<num2; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
