#include <stdio.h>

#define SIZE 10

int main(void)
{
    int i, j, max, tmp, arr[SIZE];

    for (i = 0; i < SIZE; i++)
        scanf("%d", arr + i);

    for (i = 0; i < 3; i++) {
        max = i;
        for (j = i + 1; j < SIZE; j++)
            if (arr[j] > arr[max])
                max = j;
        tmp = arr[i];
        arr[i] = arr[max];
        arr[max] = tmp;
    }

    printf("%d\n%d\n%d\n", arr[0], arr[1], arr[2]);

    return 0;
}