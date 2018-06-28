#include <stdio.h>
#define MIN -1000000
#define MAX 1000000

int
main(void)
{
    int min = MAX;
    int max = MIN;
    int num, c;
    long long sum = 0;
    scanf("%d", &c);
    while (c--) {
        scanf("%d", &num);
        sum += num;
        min = num < min ? num : min;
        max = num > max ? num : max;
    }
    printf("%d %d %lld\n", min, max, sum);
    return 0;
}