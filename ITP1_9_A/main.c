#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define END "END_OF_TEXT"

void
strtolower(char *);

int
main(void)
{
    char word[11];
    char text[12];
    int count = 0;

    scanf("%10s", word);
    while (scanf("%11s", text) && strcmp(text, END)) {
        strtolower(text);
        if (!strcmp(text, word))
            count++;
    }
    
    printf("%d\n", count);

    return 0;
}

void
strtolower(char *str)
{
    for ( ; *str; str++)
        *str = tolower(*str);
}