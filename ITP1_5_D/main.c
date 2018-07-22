#include <stdio.h>
void call(int);

int main()
{
    int n;
    scanf("%d", &n);
    call(n);
    return 0;
}

void call(int n)
{
    int i, x;
    for (i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            printf(" %d", i);
        } else {
            x = i;
            do {
                if (x % 10 == 3) {
                    printf(" %d", i);
                    break;
                }
            } while (x /= 10);
        }
    }
    putchar('\n');
}