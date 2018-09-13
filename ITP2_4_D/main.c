#include <stdio.h>

int unique(int [], int);
void pri(int [], int);

int main(void)
{
    int i, n, A[100000];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", A + i);
    
    n = unique(A, n);
    pri(A, n);
    return 0;
}

int unique(int A[], int N)
{
    int i, j;

    for (i = 0, j = 1; j < N; j++)
        if (A[i] != A[j])
            A[++i] = A[j];
    return i + 1;
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