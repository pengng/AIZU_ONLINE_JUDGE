#include <stdio.h>

int min(int [], int);
int max(int [], int);

int main(void)
{
    int i, n, q, com, b, e, A[1000];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", A + i);

    scanf("%d", &q);
    for (i = 0; i < q; i++) {
        scanf("%d %d %d", &com, &b, &e);
        if (com)
            printf("%d\n", max(A + b, e - b));
        else
            printf("%d\n", min(A + b, e - b));
    }

    return 0;
}

int min(int A[], int N)
{
    int min, i;
    
    for (min = 0, i = 1; i < N; i++)
        if (A[i] < A[min]) min = i;
    return A[min];
}

int max(int A[], int N)
{
    int max, i;
    for (max = 0, i = 1; i < N; i++)
        if (A[i] > A[max]) max = i;
    return A[max];
}