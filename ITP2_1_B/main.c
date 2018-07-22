#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QUERY_PUSH 0
#define QUERY_ACCESS 1
#define QUERY_POP 2

#define POS_FRONT 0
#define POS_BACK 1

typedef struct Node
{
    int ele;
    struct Node * prev;
    struct Node * next;
} * Node;

typedef struct Deque
{
    Node head;
    Node tail;
    int size;
} * Deque;

void initDeque(Deque *);
void pushBack(Deque, int);
void pushFront(Deque, int);
void popBack(Deque);
void popFront(Deque);
void randomAccess(Deque, int);
void unsetDeque(Deque);

int main(void) {
    int n, query, opt, val;
    Deque d;

    initDeque(&d);

    scanf("%d", &n);
    while (n--) {
        scanf("%d", &query);
        if (query == QUERY_PUSH) {
            scanf("%d %d", &opt, &val);
            if (opt == POS_FRONT)
                pushFront(d, val);
            else if (opt == POS_BACK)
                pushBack(d, val);
        } else if (query == QUERY_ACCESS) {
            scanf("%d", &val);
            randomAccess(d, val);
        } else if (query == QUERY_POP) {
            scanf("%d", &opt);
            if (opt == POS_FRONT)
                popFront(d);
            else if (opt == POS_BACK)
                popBack(d);
        }
    }
    unsetDeque(d);

    return 0;
}

void initDeque(Deque * d)
{
    *d = (Deque) malloc(sizeof(struct Deque));
    (*d)->head = (*d)->tail = NULL;
    (*d)->size = 0;
}

void pushBack(Deque d, int x)
{
    Node node = (Node) malloc(sizeof(struct Node));
    node->ele = x;
    node->next = NULL;

    if (d->size) {
        node->prev = d->tail;
        d->tail = d->tail->next = node;
    } else {
        d->head = d->tail = node;
        node->prev = NULL;
    }
    d->size++;
}

void pushFront(Deque d, int x)
{
    Node node = (Node) malloc(sizeof(struct Node));
    node->ele = x;
    node->prev = NULL;

    if (d->size) {
        node->next = d->head;
        d->head = d->head->prev = node;
    } else {
        d->head = d->tail = node;
        node->next = NULL;
    }
    d->size++;
}

void popBack(Deque d)
{
    Node tmp = d->tail;
    if (d->size == 1) {
        d->head = d->tail = NULL;
    } else {
        d->tail->prev->next = NULL;
        d->tail = d->tail->prev;
    }
    free(tmp);
    d->size--;
}

void popFront(Deque d)
{
    Node tmp = d->head;
    if (d->size == 1) {
        d->head = d->tail = NULL;
    } else {
        d->head->next->prev = NULL;
        d->head = d->head->next;
    }
    free(tmp);
    d->size--;
}

void randomAccess(Deque d, int p)
{
    Node tmp = d->head;
    while (p--) {
        tmp = tmp->next;
    }
    printf("%d\n", tmp->ele);
}

void unsetDeque(Deque d)
{
    while (d->size)
        popFront(d);
    free(d);
}