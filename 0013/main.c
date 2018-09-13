#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

struct Stack
{
    int top;
    int *list;
};

typedef struct Stack * Stack;

Stack createStack(int);
void push(Stack, int);
int pop(Stack);

int main(void)
{
    Stack s = createStack(SIZE);
    int cmd;
    while (scanf("%d", &cmd) != EOF)
        if (cmd)
            push(s, cmd);
        else
            printf("%d\n", pop(s));

    return 0;
}

Stack createStack(int size)
{
    Stack s = malloc(sizeof(struct Stack));
    s->top = 0;
    s->list = malloc(sizeof(int) * size);
    return s;
}

void push(Stack s, int x)
{
    s->list[s->top++] = x;
}

int pop(Stack s)
{
    return s->list[--s->top];
}

