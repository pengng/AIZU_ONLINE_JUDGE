#include <stdio.h>

int main(void)
{
    int x, y, z, min, max;
    scanf("%d %d %d", &x, &y, &z);

    min = x < y ? x : y;
    min = z < min ? z : min;

    max = x > y ? x : y;
    max = z > max ? z : max;

    printf("%d %d\n", min, max);

    return 0;
}