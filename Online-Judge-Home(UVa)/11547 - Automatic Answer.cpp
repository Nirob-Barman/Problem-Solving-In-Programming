#include <bits/stdc++.h>

int main()
{
    int ans, n, a, remain, t, i;

    scanf("%d", &t);

    for (i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        ans = (((n * 567) / 9 + 7492) * 235) / 47 - 498;
        if (ans < 0)
            ans = (-1) * ans;
        remain = ans / 10;
        a = remain % 10;
        printf("%d\n", a);
    }
}
