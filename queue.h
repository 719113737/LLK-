#include <stdio.h>
#include <stdlib.h>

struct no
{
    int x;
    int y;
    int direction;
    int mark;
    struct no* next;
};

typedef struct no node;

struct Queu
{
    node *head;
    node *rear;
};
typedef struct Queu Queue;

void InitQueue(Queue* Q);

void Enqueue(Queue* Q,int x,int y,int direction,int mark);

void DeQueue(Queue* Q);

int isEmpty(Queue* Q);
