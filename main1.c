#include <stdio.h>
#include <stdlib.h>
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
0 1 2 4 0 0
5 1 0 3 5 0
0 2 3 4 0 0
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
        matrix[1][1]=1;
        matrix[1][2]=2;
        matrix[1][3]=4;
        matrix[2][1]=1;
        matrix[2][3]=3;
        matrix[3][1]=2;
        matrix[3][2]=3;
        matrix[3][3]=4;
        matrix[2][0]=5;
        matrix[2][4]=5;
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
        //通过前驱数组输出拐点
        int o=c;
        int p=d;
        x=o;
        y=p;
        printf("(%d,%d)->",o,p);
        while(prev[o][p].x!=-1)
        {
            if(abs(prev[o][p].x-x)==1&&abs(prev[o][p].y-y)==1)
                printf("(%d,%d)->",o,p);
            x=o;
            y=p;
            o=prev[x][y].x;
            p=prev[x][y].y;

        }
        printf("(%d,%d)",o,p);
        return 1;
    }
}


int main()
{
    createMatrix();
    printf("图片数组如下：\n");
    for(int i=0; i<num1; i++)
    {
        for(int j=0; j<num2; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //printf("\n%d",canConnect(1,2,3,1));
    printf("\n%d",canConnect(3,3,1,3));

    return 0;
}
