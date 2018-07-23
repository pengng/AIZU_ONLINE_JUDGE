#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int
main(void)
{
    int i, j;
    char str[202];
    char p[101];

    bool flag;

    scanf("%s", str);
    scanf("%s", p);
    
    int len = strlen(str);
    for (i = 0; i < len; i++)
        str[len + i] = str[i];

    for (i = 0; i < strlen(str); i++)
        if (str[i] == p[0]) {
            flag = true;
            for (j = 0; j < strlen(p); j++)
                if (p[j] != str[i + j])
                    flag = false;
            if (flag) {
                printf("Yes\n");
                break;
            }
        }

    if (!flag)
        printf("No\n");

    return 0;
}