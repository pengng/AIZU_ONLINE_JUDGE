#include <stdio.h>
#define LEN 52

int
main(void)
{
    int map[26] = { ['S' - 'A'] = 0, ['H' - 'A'] = 1, ['C' - 'A'] = 2, ['D' - 'A'] = 3 };
    int map2[4] = { 'S', 'H', 'C', 'D' };
    int card[LEN] = {};
    int i, n, num;
    char ch;
    scanf("%d", &n);
    while (getchar() != '\n')
        continue;
    i = n;
    while (i--) {
        scanf("%c %d", &ch, &num);
        card[map[ch - 'A'] * 13 + num - 1] = 1;
        while ((ch = getchar()) != '\n' && ch != EOF)
            continue;
    }
    for (i = 0; i < LEN; i++)
        if (!card[i])
            printf("%c %d\n", map2[i / 13], i % 13 + 1 );
    return 0;
}