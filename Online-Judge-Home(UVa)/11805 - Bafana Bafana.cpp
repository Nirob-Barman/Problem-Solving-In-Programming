#include <bits/stdc++.h>

int main()
{
    int n, k, p, cp, i, t, tk;
    scanf("%d", &t);
    for (tk = 1; tk <= t; tk++)
    {
        scanf("%d %d %d", &n, &k, &p);
        cp = k + p;
        while (cp > n)
            cp = cp - n;
        printf("Case %d: %d\n", tk, cp);
    }
    return 0;
    N
}
