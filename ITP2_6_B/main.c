#include <stdio.h>
#include <stdbool.h>

#define SIZE 200000

bool binarySearch(int [], int, int);

int main(void)
{
    int i, n, m, b, A[SIZE];
    bool flag = true;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", A + i);
    
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        scanf("%d", &b);
        if (!binarySearch(A, n, b)) {
            flag = false;
            break;
        }
    }
    puts(flag ? "1" : "0");

    return 0;
}

bool binarySearch(int A[], int N, int k)
{
    int low, mid, high;
    low = 0;
    high = N;
    while (low < high) {
        mid = (low + high) / 2;
        if (A[mid] == k)
            return true;
        else if (A[mid] < k)
            low = mid + 1;
        else
            high = mid;
    }
    return false;
}