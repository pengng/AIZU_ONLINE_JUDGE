#include <stdio.h>

void swap(int *, int *);
void pri(int [], int);

int main(void)
{
    int i, j, n, q, b, e, t, A[1000];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", A + i);

    scanf("%d", &q);
    for (i = 0; i < q; i++) {
        scanf("%d %d %d", &b, &e, &t);
        for (j = b; b < e; b++)
            swap(A + b, A + (b - j) + t);
    }

    pri(A, n);
    return 0;
}

void swap(int *a, int *b)
{
    int t;

    t = *a;
    *a = *b;
    *b = t;
}

void pri(int A[], int N)
{
    int i;
    
    for (i = 0; i < N; i++) {
        if (i > 0) putchar(' ');
        printf("%d", A[i]);
    }
    putchar('\n');
}