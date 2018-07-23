#include <stdio.h>

int main(void)
{
    int a, b, sum, n;
    while (scanf("%d %d", &a, &b) == 2) {
        n = 0;
        sum = a + b;
        while (sum) {
            n++;
            sum /= 10;
        }
        printf("%d\n", n);
    }

    return 0;
}