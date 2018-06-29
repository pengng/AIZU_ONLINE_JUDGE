#include <stdio.h>
#include <stdlib.h>

int **
Malloc(int n, int m)
{
    int i;
    int **arr = (int **) malloc(sizeof(int *) * n);
    for (i = 0; i < n; i++)
        arr[i] = (int *) malloc(sizeof(int) * m);

    return arr;
}

void
Scanf(int *arr[], int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", *(arr + i) + j);
}