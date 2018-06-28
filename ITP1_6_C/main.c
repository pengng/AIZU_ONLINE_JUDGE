#include <stdio.h>
#define BUILDINGS 4
#define FLOORS 3
#define ROOMS 10

void
priHouse(const int [BUILDINGS][FLOORS][ROOMS]);

int
main(void)
{
    int house[BUILDINGS][FLOORS][ROOMS] = {};
    int n, building, floor, room, people;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d %d %d", &building, &floor, &room, &people);
        house[building - 1][floor - 1][room - 1] += people;
    }
    priHouse(house);
    return 0;
}

void
priHouse(const int house[BUILDINGS][FLOORS][ROOMS])
{
    int i, j, k;
    for (i = 0; i < BUILDINGS; i++) {
        for (j = 0; j < FLOORS; j++) {
            for (k = 0; k < ROOMS; k++)
                printf(" %d", house[i][j][k]);
            putchar('\n');
        }
        if (i < BUILDINGS - 1)
            puts("####################");
    }
}