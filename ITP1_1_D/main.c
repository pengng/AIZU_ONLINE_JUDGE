#include <stdio.h>

int
main(void)
{
    int sec;
    int h, m, s;
    scanf("%d", &sec);
    h = sec / 3600;
    m = (sec - h * 3600) / 60;
    s = sec % 60;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}