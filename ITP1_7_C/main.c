#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
    int r, c, sum, i, j, num, rSum;
    int * cSum;

    sum = 0;
    scanf("%d %d", &r, &c);
    cSum = (int *) calloc(sizeof(int), c);

    for (i = 0; i < r; i++) {
        rSum = 0;
        for (j = 0; j < c; j++) {
            scanf("%d", &num);
            printf("%d ", num);
            rSum += num;
            cSum[j] += num;
            sum += num;
        }
        printf("%d\n", rSum);
    }


    for (i = 0; i < c; i++)
        printf("%d ", cSum[i]);
    printf("%d\n", sum);

    return 0;
}