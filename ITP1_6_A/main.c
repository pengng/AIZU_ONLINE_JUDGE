#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
    int n, num;
    int i = 0;
    int * arr;

    scanf("%d", &n);
    arr = (int *) malloc(n * sizeof(int));
    while (i < n)
        scanf("%d", arr + i++);
    printf("%d", arr[--n]);
    while (n--)
        printf(" %d", arr[n]);
    putchar('\n');
    free(arr);
    return 0;
}