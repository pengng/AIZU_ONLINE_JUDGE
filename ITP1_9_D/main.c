#include <stdio.h>
#include <string.h>

#define MAXLINE 1000
#define CMD_LEN 9

void
flip(char *, int, int);

void
pri(char *, int);

int
main(void)
{
    char str[MAXLINE + 1];
    char rep[MAXLINE + 1];
    char cmd[CMD_LEN];
    int cmdCnt, param1, param2;
    scanf("%s", str);
    for (scanf("%d", &cmdCnt); cmdCnt > 0; cmdCnt--) {
        scanf("%s %d %d", cmd, &param1, &param2);
        if (!strcmp(cmd, "reverse"))
            flip(str, param1, param2);
        else if (!strcmp(cmd, "replace")) {
            scanf("%s", rep);
            strncpy(str + param1, rep, strlen(rep));
        } else if (!strcmp(cmd, "print"))
            pri(str + param1, param2 - param1);
    }

    return 0;
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

void
pri(char *str, int l)
{
    int i;
    for (i = 0; i <= l; i++)
        putchar(str[i]);
    putchar('\n');
}