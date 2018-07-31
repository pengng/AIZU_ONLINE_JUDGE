#include <stdio.h>
#include <math.h>

int main(void)
{
    int i, n, S[1000];
    double sumi, sumn, avg;
    while (scanf("%d", &n) && n > 0) {
        sumi = 0;
        sumn = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", S + i);
            sumi += S[i];
        }
        avg = sumi / n;
        for (i = 0; i < n; i++) {
            sumn += (S[i] - avg) * (S[i] - avg);
        }
        printf("%.4f\n", sqrt(sumn / n));
    }

    return 0;
}