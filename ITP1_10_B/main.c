#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, C;
    double S, L, h;

    scanf("%d %d %d", &a, &b, &C);

    S = (double) a * b / 2;
    L = sqrt((double) a * a + b * b) + a + b;
    h = b;

    printf("%.4f\n%.4f\n%.4f\n", S, L, h);

    return 0;
}