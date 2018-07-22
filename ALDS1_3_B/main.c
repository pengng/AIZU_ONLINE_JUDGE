#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100000

typedef struct Task
{
    char name[11];
    int time;
} Task;

Task dequeue();
void enqueue(Task);
void priTask(Task);
void proc(Task);
bool isEmpty();

Task Queue[MAX_SIZE];
int head, tail;
int sum;
int n, q;

int main(void)
{
    head = tail = 0;

    Task t;

    scanf("%d %d", &n, &q);

    while (n--) {
        scanf("%s %d", t.name, &t.time);
        proc(t);
    }

    while (!isEmpty())
        proc(dequeue());

    return 0;
}

void proc(Task t)
{
    if (t.time <= q) {
        sum += t.time;
        priTask(t);
    } else {
        t.time -= q;
        sum += q;
        enqueue(t);
    }
}

void priTask(Task t)
{
    printf("%s %d\n", t.name, sum);
}

void enqueue(Task t)
{
    Queue[tail] = t;
    tail = (tail + 1) % MAX_SIZE;
}

Task dequeue()
{
    Task tmp = Queue[head];
    head = (head + 1) % MAX_SIZE;
    return tmp;
}

bool isEmpty()
{
    return head == tail;
}