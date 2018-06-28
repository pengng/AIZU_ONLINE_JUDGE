#include <stdio.h>

int
main(void)
{
    int n;
    int i = 1;
    while (scanf("%d", &n) && n)
        printf("Case %d: %d\n", i++, n);
    return 0;
}