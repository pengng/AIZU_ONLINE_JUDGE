#include <stdio.h>

int main(void)
{

    int i, j, n, q, b, e, k, cnt;
    int A[1000];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", A + i);

    scanf("%d", &q);
    for (i = 0; i < q; i++) {
        scanf("%d %d %d", &b, &e, &k);
        cnt = 0;
        for (j = b; j < e; j++)
            if (A[j] == k)
                cnt++;
        printf("%d\n", cnt);
    }

    return 0;
}