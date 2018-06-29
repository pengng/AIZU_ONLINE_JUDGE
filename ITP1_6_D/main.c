#include <stdio.h>
#include <stdlib.h>
#include "../include/alg.h"

int
main(void)
{
    int n, m, i, j, sum;
    int **arr;
    int *vector;

    scanf("%d %d", &n, &m);
    arr = Malloc(n, m);
    vector = (int *) malloc(sizeof(int) * m);

    Scanf(arr, n, m);
    for (i = 0; i < m; i++)
        scanf("%d", vector + i);
    
    for (i = 0; i < n; i++) {
        sum = 0;
        for (j = 0; j < m; j++)
            sum += arr[i][j] * vector[j];
        printf("%d\n", sum);
    }
    return 0;
}