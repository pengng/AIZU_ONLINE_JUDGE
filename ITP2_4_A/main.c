#include <stdio.h>

void reverse(int [], int, int);
void pri(int [], int);

int main(void)
{
    int i, n, q, b, e, A[1000];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", A + i);
    
    scanf("%d", &q);
    for (i = 0; i < q; i++) {
        scanf("%d %d", &b, &e);
        reverse(A, b, e);
    }

    pri(A, n);
    return 0;
}

void reverse(int A[], int b, int e)
{
    int tmp;

    e--;
    while (b < e) {
        tmp = A[b];
        A[b] = A[e];
        A[e] = tmp;
        b++;
        e--;
    }
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