#include <stdio.h>

#define INSERT 0
#define FIND 1

int main(void)
{
    int q, cmd, x, num;

    int S[1000000000] = {};
    num = 0;

    scanf("%d", &q);
    while (q) {
        scanf("%d %d", &cmd, &x);
        if (cmd == INSERT) {
            if (!S[x])
                num++;
            S[x] = 1;
            printf("%d\n", num);
        } else if (cmd == FIND) {
            printf("%d\n", S[x]);
        }
    }

    return 0;
}