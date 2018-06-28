#include <stdio.h>

void
draw(int, int);

int
main(void)
{
    int h, w;
    while (scanf("%d %d", &h, &w) && h && w)
        draw(h, w);
    return 0;
}

void
draw(int h, int w)
{
    int i, j;
    for (i = 0; i < h; i++) {
        for (j = 0; j < w; j++)
            putchar('#');
        putchar('\n');
    }
    putchar('\n');
}