#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 400000

#define QUERY_PUSH 0
#define QUERY_ACCESS 1
#define QUERY_POP 2

#define POS_FRONT 0
#define POS_BACK 1

struct deque
{
    int head, tail, list[MAX_SIZE];
};

typedef struct deque * Deque;

void pushBack(Deque, int);
void pushFront(Deque, int);
void popBack(Deque);
void popFront(Deque);
void randomAccess(Deque, int);

int main(void) {
    int n, query, opt, val;
    
    struct deque sd = {0, 0};
    Deque d = &sd;

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

    return 0;
}

void pushBack(Deque d, int x)
{
    d->list[d->tail] = x;
    d->tail = (d->tail + 1) % MAX_SIZE;
}

void pushFront(Deque d, int x)
{
    d->head = (d->head - 1 + MAX_SIZE) % MAX_SIZE;
    d->list[d->head] = x;
}

void popBack(Deque d)
{
    d->tail = (d->tail - 1 + MAX_SIZE) % MAX_SIZE;
}

void popFront(Deque d)
{
    d->head = (d->head + 1) % MAX_SIZE;
}

void randomAccess(Deque d, int p)
{
    printf("%d\n", d->list[(d->head + p) % MAX_SIZE]);
}