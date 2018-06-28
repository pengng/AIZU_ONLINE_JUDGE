#include <stdio.h>
#define WHITE '#'
#define BLACK '.'
#define NEWLINE '\n'

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
    char ch = WHITE;
    char s = WHITE;
    for (i = 0; i < h; i++) {
        ch = s;
        for (j = 0; j < w; j++) {
            putchar(ch);
            ch = ch ^ WHITE ^ BLACK;
        }
        putchar(NEWLINE);
        s = s ^ WHITE ^ BLACK;
    }
    putchar(NEWLINE);
}