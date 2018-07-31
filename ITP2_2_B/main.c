#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define CMD_ENQUEUE 0
#define CMD_FRONT 1
#define CMD_DEQUEUE 2

#define SIZE 200000

typedef int Item;

struct queue
{
    int head, tail;
    Item * list;
};

typedef struct queue * Queue;

Queue createQueue(void);
bool isEmpty(Queue);
bool isFull(Queue);
void enqueue(Queue, int);
void dequeue(Queue);
Item * front(Queue);

int main(void)
{
    int i, n, q, cmd, t, x;
    Queue * L;

    scanf("%d %d", &n, &q);
    L = (Queue *) malloc(sizeof(Queue) * n);
    for (i = 0; i < n; i++)
        L[i] = createQueue();

    while (q--) {
        scanf("%d %d", &cmd, &t);
        switch (cmd) {
        case CMD_ENQUEUE:
            scanf("%d", &x);
            enqueue(L[t], x);
            break;
        case CMD_FRONT:
            if (front(L[t]))
                printf("%d\n", *front(L[t]));
            break;
        case CMD_DEQUEUE:
            dequeue(L[t]);
        }
    }

    return 0;
}

Queue createQueue(void)
{
    Queue q = (Queue) malloc(sizeof(struct queue));
    q->head = q->tail = 0;
    q->list = (Item *) malloc(SIZE * sizeof(Item));
    return q;
}

bool isEmpty(Queue q)
{
    return q->head == q->tail;
}

bool isFull(Queue q)
{
    return (q->tail + 1) % SIZE == q->head;
}

void enqueue(Queue q, int x)
{
    if (isFull(q)) return;
    q->list[q->tail] = x;
    q->tail = (q->tail + 1) % SIZE;
}

void dequeue(Queue q)
{
    if (isEmpty(q)) return;
    q->head = (q->head + 1) % SIZE;
}

Item * front(Queue q)
{
    if (isEmpty(q)) return NULL;
    return q->list + q->head;
}
