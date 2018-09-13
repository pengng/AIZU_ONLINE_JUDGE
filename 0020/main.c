#include <stdio.h>

int main(void)
{
    char ch;

    while (scanf("%c", &ch) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            printf("%c", ch - 'a' + 'A');
        else
            printf("%c", ch);
    }

    return 0;
}