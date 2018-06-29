#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y;
} P;

double
distance(P *, P *);

int
main(void)
{
    P p1, p2;
    scanf("%lf %lf %lf %lf", &p1.x, &p1.y, &p2.x, &p2.y);
    printf("%f\n", distance(&p1, &p2));

    return 0;
}

double
distance(P * p1, P * p2)
{
    double d1 = fabs(p1->x - p2->x);
    double d2 = fabs(p1->y - p2->y);
    return sqrt(d1 * d1 + d2 * d2);
}