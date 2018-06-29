#include <stdio.h>
#include <string.h>
#define MAXLINE 100

int
main(void)
{
    int n, score1, score2, cmp;
    char card1[MAXLINE + 1], card2[MAXLINE + 1];

    score1 = score2 = 0;

    for (scanf("%d", &n); n > 0; n--) {
        scanf("%s %s", card1, card2);
        cmp = strcmp(card1, card2);
        if (cmp > 0)
            score1 += 3;
        else if (cmp < 0)
            score2 += 3;
        else
            score1++, score2++;
    }

    printf("%d %d\n", score1, score2);

    return 0;
}