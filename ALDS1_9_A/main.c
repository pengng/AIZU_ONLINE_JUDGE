#include <stdio.h>

int main(void)
{
    int i, H, heap[251];

    scanf("%d", &H);
    for (i = 1; i <= H; i++)
        scanf("%d", heap + i);
    
    for (i = 1; i <= H; i++) {
        printf("node %d: key = %d, ", i, heap[i]);
        if (i > 1)
            printf("parent key = %d, ", heap[i / 2]);
        if (i * 2 <= H)
            printf("left key = %d, ", heap[i * 2]);
        if (i * 2 + 1 <= H)
            printf("right key = %d, ", heap[i * 2 + 1]);
        putchar('\n');
    }

    return 0;
}