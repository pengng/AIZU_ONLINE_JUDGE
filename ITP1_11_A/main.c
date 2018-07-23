#include <stdio.h>

#define FACES 6

int main(void)
{
    int num[FACES], i;
    char ch;

    for (i = 0; i < FACES; i++)
        scanf("%d", num + i);
    
    while ((ch = getchar()) != EOF) {
        switch (ch) {
        case 'S':
        case 'N':
        case 'E':
        case 'w':
        }
    }

    return 0;
}