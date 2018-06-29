#include <stdio.h>

int
main(void)
{
    char ch;
    while ((ch = getchar()) != EOF)
        if (ch >= 'A' && ch <= 'Z')
            putchar(ch - 'A' + 'a');
        else if (ch >= 'a' && ch <= 'z')
            putchar(ch - 'a' + 'A');
        else
            putchar(ch);
    return 0;
}