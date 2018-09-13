#include <stdio.h>
#include <limits.h>

int main(void)
{
    int n;

    scanf("%d", &n);
    while (n) {

        int i, a, max, sum;

        i = sum = 0;
        max = INT_MIN;

        for (; i < n; i++) {
            scanf("%d", &a);
            sum += a;
            if (sum > max)
                max = sum;
            if (sum < 0)
                sum = 0;
        }
        
        printf("%d\n", max);
        scanf("%d", &n);
    }

    return 0;
}