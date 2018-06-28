#include <stdio.h>

int
main(void)
{
    int a, b, c;
    int count;
    scanf("%d %d %d", &a, &b, &c);
    for (count = 0; a <= b; a++)
        if (c % a == 0) count++;
    printf("%d\n", count);

    return 0;
}