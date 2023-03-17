#include <bits/stdc++.h>

int main()
{
    int k = 1, n, i, c, zc;
    while (scanf("%d", &n) != EOF && n != 0)
    {
        int a[n];
        c = 0, zc = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] > 0)
                c++;
            else
                zc++;
        }
        printf("Case %d: %d\n", k++, c - zc);
    }
}
