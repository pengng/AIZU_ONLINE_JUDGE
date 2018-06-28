#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
    int n, m, i, j, sum;
    int **arr;
    int *vector;

    scanf("%d %d", &n, &m);
    arr = (int **) malloc(sizeof(int *) * n);
    for (i = 0; i < n; i++)
        arr[i] = (int *) malloc(sizeof(int) * m);
    vector = (int *) malloc(sizeof(int) * m);

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", *(arr + i) + j);
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