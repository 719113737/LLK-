#include <stdio.h>
#include <stdlib.h>
#include "queueTemp.h"

//初始化
void InitQueueTemp(QueueTemp *Q)
{
    Q->head=Q->rear=NULL;
}

//入队
void EnqueueTemp(QueueTemp *Q,int x,int y,int Order)
{
    nod* temp=(nod*)malloc(sizeof(nod));
    temp->x=x;
    temp->y=y;
    temp->Order=Order;
    if(Q->head==NULL)
    {
        Q->head=Q->rear=temp;
    }
    else
    {
        Q->rear->next=temp;
        Q->rear=Q->rear->next;
        Q->rear->next=NULL;
    }
}

//出队
void DeQueueTemp(QueueTemp *Q)
{
    Q->head=Q->head->next;
}

//判空
int isEmptyTemp(QueueTemp *Q)
{
    if(Q->head==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//获取指定节点
nod* getNod(QueueTemp *Q,int num){
 nod* temp=Q->head;
    for(int i=1; i<num; i++)
    {
        temp=temp->next;
    }
    return temp;
}
