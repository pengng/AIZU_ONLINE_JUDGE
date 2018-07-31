#include <stdio.h>

int lowerBound(int [], int, int);
int upperBound(int [], int, int);

int main(void)
{
    int i, n, q, k, A[100000];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", A + i);

    scanf("%d", &q);
    for (i = 0; i < q; i++) {
        scanf("%d", &k);
        printf("%d %d\n", lowerBound(A, n, k), upperBound(A, n, k));
    }

    return 0;
}


int lowerBound(int A[], int N, int k)
{
    int low, mid, high;
    low = 0;
    high = N;
    while (low < high) {
        mid = (low + high) / 2;
        if (A[mid] == k) {
            while (mid > 0 && A[mid - 1] == k)
                mid--;
            return mid;
        } else if (A[mid] < k) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    if (A[mid] < k)
        return mid + 1;
    else
        return mid;
}


int upperBound(int A[], int N, int k)
{
    int low, mid, high;
    low = 0;
    high = N;
    while (low < high) {
        mid = (low + high) / 2;
        if (A[mid] == k) {
            while (mid < N - 1 && A[mid + 1] == k)
                mid++;
            return mid + 1;
        } else if (A[mid] < k) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    if (A[mid] < k)
        return mid + 1;
    else
        return mid;
}