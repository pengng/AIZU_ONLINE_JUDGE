#include <stdio.h>

int
main(void)
{
    int a, b, result;
    char op;
    while (scanf("%d %c %d", &a, &op, &b) && op != '?') {
        switch (op) {
            case '+':
                result = a + b;
                break;
            case '-':
                result = a - b;
                break;
            case '*':
                result = a * b;
                break;
            case '/':
                result = a / b;
        }
        printf("%d\n", result);
    }
    return 0;
}