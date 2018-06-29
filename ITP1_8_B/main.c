#include <stdio.h>

int
main(void)
{
    char ch;
    while ((ch = getchar()) != '0' && ch != EOF) {
        int n = 0;
        while (ch >= '0' && ch <= '9') {
            n += ch - '0';
            ch = getchar();
        }
        printf("%d\n", n);
    }
    return 0;
}