#include <stdio.h>
#include <stdlib.h>

int top, S[1000];

void push(int);
int pop();

int main(void)
{
    top = 0;

    char str[100];
    int x, y;

    while (scanf("%s", str) != EOF) {
        if (str[0] == '+') {
            x = pop();
            y = pop();
            push(x + y);
        } else if (str[0] == '-') {
            y = pop();
            x = pop();
            push(x - y);
        } else if (str[0] == '*') {
            x = pop();
            y = pop();
            push(x * y);
        } else {
            push(atoi(str));
        }
    }
    printf("%d\n", pop());

    return 0;
}

void push(int x)
{
    S[top++] = x;
}

int pop()
{
    return S[--top];
}