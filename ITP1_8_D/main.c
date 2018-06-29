#include <stdio.h>
#include <string.h>

int
main(void)
{
    int i;
    char str[202];
    char p[101];

    scanf("%100s %100s", str, p);
    // strncat(str, str, 100);

    printf("%s %s\n", str, p);
}