#include <stdio.h>

int
main(void)
{
    int m, f, r;
    while (scanf("%d %d %d", &m, &f, &r) && (m != -1 || f != -1 || r != -1))
        if (m == -1 || f == -1 || m + f < 30)
            puts("F");
        else if (m + f >= 30 && m + f < 50)
            if (r >= 50)
                puts("C");
            else
                puts("D");
        else if (m + f >= 50 && m + f < 65)
            puts("C");
        else if (m + f >= 65 && m + f < 80)
            puts("B");
        else
            puts("A");
    
    return 0;
}