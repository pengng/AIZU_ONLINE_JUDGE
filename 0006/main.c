#include <stdio.h>
#include <string.h>

void reverse(char *);

int main(void)
{
    char str[21];

    scanf("%s", str);
    reverse(str);
    puts(str);

    return 0;
}

void reverse(char *str)
{
    int i, j;
    char ch;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
    }
}