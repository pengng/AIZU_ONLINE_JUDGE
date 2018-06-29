#include <stdio.h>
#include <ctype.h>
#define SIZE 26

int
main(void)
{
    char ch;
    int i;
    int counter[SIZE] = {};
    while ((ch = getchar()) != EOF)
        if (isalpha(ch))
            counter[tolower(ch) - 'a']++;
    
    for (i = 0; i < SIZE; i++)
        printf("%c : %d\n", 'a' + i, counter[i]);
    
    return 0;
}