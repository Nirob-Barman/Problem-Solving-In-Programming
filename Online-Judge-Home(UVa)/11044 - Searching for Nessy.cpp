#include <stdio.h>

int main()
{
    int t, k, n, m;
    scanf("%d", &t);
    for (k = 0; k < t; k++)
    {
        scanf("%d %d", &n, &m);
        printf("%d\n", (n / 3) * (m / 3));
    }
}
