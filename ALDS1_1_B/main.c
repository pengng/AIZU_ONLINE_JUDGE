#include <stdio.h>

int GCD(int, int);

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", GCD(x, y));

    return 0;
}

int GCD(int p, int q)
{
    if (q == 0)
        return p;
    return GCD(q, p % q);
}