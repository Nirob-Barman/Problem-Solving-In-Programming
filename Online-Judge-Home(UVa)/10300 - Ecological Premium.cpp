#include <bits/stdc++.h>

int main()
{
    int t, k, f, i, a, b, c, ans;
    scanf("%d", &t);
    for (k = 0; k < t; k++)
    {
        scanf("%d", &f);
        ans = 0;
        for (i = 0; i < f; i++)
        {
            scanf("%d %d %d", &a, &b, &c);
            ans += (a * c);
        }
        printf("%d\n", ans);
    }
}
