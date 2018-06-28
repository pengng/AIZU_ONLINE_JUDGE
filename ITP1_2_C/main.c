#include <stdio.h>

void
priArr(int [], int);
void
sort(int [], int);

int
main(void)
{
    int arr[3];
    scanf("%d %d %d", arr, arr + 1, arr + 2);
    sort(arr, 3);
    priArr(arr, 3);
    return 0;
}

void
priArr(int arr[], int len)
{
    int i = 0;
    printf("%d", arr[i++]);
    for ( ; i < len; i++)
        printf(" %d", arr[i]);
    putchar('\n');
}

void
sort(int arr[], int len)
{
    int i, j, tmp;
    for (i = 1; i < len; i++) {
        tmp = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > tmp; j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = tmp;
    }
}