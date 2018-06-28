#include <stdio.h>
#include <math.h>

int
main(void)
{
    double rad;
    scanf("%lf", &rad);
    printf("%f %f\n", M_PI * rad * rad, 2 * M_PI * rad);
    return 0;
}