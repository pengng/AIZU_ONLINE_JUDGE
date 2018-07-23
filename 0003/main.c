#include <stdio.h>

void swap(int *, int *);

int main(void)
{
    int a, b, c, n;

    scanf("%d", &n);
    while (n--) {
        scanf("%d %d %d", &a, &b, &c);
        if (a < b)
            swap(&a, &b);
        if (a < c)
            swap(&a, &c);
        if (a * a == b * b + c * c)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}

void swap(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}