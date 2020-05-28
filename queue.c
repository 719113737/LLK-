#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

//��ʼ��
void InitQueue(Queue* Q)
{
    Q->head=Q->rear=NULL;
}

//���
void Enqueue(Queue* Q,int x,int y,int direction,int mark)
{
    node* temp=(node*)malloc(sizeof(node));
    temp->x=x;
    temp->y=y;
    temp->direction=direction;
    temp->mark=mark;
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
void DeQueue(Queue* Q)
{
    Q->head=Q->head->next;
}

//�п�
int isEmpty(Queue* Q){
    if(Q->head==NULL){
        return 1;
    }else{
        return 0;
    }
}
