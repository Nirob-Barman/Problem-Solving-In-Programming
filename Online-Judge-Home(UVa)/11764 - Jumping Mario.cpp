#include <bits/stdc++.h>

int main()
{
    int t, k, n, i, h, l;
    scanf("%d", &t);
    for (k = 1; k <= t; k++)
    {
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        h = 0, l = 0;
        for (i = 0; i < n - 1; i++)
        {
            if (a[i] < a[i + 1])
                h++;
            else if (a[i] > a[i + 1])
                l++;
        }
        printf("Case %d: %d %d\n", k, h, l);
    }
}
