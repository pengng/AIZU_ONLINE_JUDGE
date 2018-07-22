#include <stdio.h>

int selCnt(int, int);

int main(void)
{
    int n, t;
    while (scanf("%d %d", &n, &t) && n)
        printf("%d\n", selCnt(n, t));
    
    return 0;            
}

int selCnt(int max, int target)
{
    int i, j, k;
    int cnt = 0;
    for (i = 1; i <= max - 2; i++)
        for (j = i + 1; j <= max - 1; j++)
            for (k = j + 1; k <= max; k++)
                if (i + j + k == target)
                    cnt++;
    return cnt;
}