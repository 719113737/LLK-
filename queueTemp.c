#include <stdio.h>
#include <stdlib.h>
#include "queueTemp.h"

//��ʼ��
void InitQueueTemp(QueueTemp *Q)
{
    Q->head=Q->rear=NULL;
}

//���
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

//����
void DeQueueTemp(QueueTemp *Q)
{
    Q->head=Q->head->next;
}

//�п�
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

//��ȡָ���ڵ�
nod* getNod(QueueTemp *Q,int num){
 nod* temp=Q->head;
    for(int i=1; i<num; i++)
    {
        temp=temp->next;
    }
    return temp;
}
