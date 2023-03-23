#include <stdio.h>

int main()
{
    int t, k, h, l, n, prev, cur, i;
    scanf("%d", &t);
    for (k = 1; k <= t; k++)
    {
        scanf("%d\n%d", &n, &prev);
        h = 0, l = 0;
        for (i = 0; i < n - 1; i++)
        {
            scanf("%d", &cur);
            if (cur > prev)
                h++;
            else if (cur < prev)
                l++;
            prev = cur;
        }
        printf("Case %d: %d %d\n", k, h, l);
    }
}
