#include <stdio.h>
#include <string.h>
#define MAXLINE 200

void
rotate(char *, int);

void
flip(char *, int, int);

int
main(void)
{
    char str[MAXLINE + 1];
    int h, n, hSum;
    while (scanf("%200s", str) && str[0] != '-') {
        hSum = 0;
        for (scanf("%d", &n); n > 0; n--) {
            scanf("%d", &h);
            hSum += h;
        }
        rotate(str, hSum);
        printf("%s\n", str);
    }
}

void
rotate(char *str, int r)
{
    r %= strlen(str);
    if (r) {
        flip(str, 0, r - 1);
        flip(str, r, strlen(str) - 1);
        flip(str, 0, strlen(str) - 1);
    }
}

void
flip(char *str, int st, int end)
{
    char tmp;
    for ( ; st < end; st++, end--) {
        tmp = str[st];
        str[st] = str[end];
        str[end] = tmp;
    }
}
