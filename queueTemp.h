#include <stdio.h>
#include <stdlib.h>

struct nodd
{
    int x;
    int y;
    int Order;
    struct nodd* next;
};
typedef struct nodd nod;

struct Que
{
    nod *head;
    nod *rear;
};
typedef struct Que QueueTemp;

void InitQueueTemp(QueueTemp *Q);

void EnqueueTemp(QueueTemp *Q,int x,int y,int Number);

void DeQueueTemp(QueueTemp *Q);

int isEmptyTemp(QueueTemp *Q);

nod* getNod(QueueTemp *Q,int num);

