#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, x;
        scanf("%d %d %d", &a, &b, &x);
        printf("%d\n", (b - a) / x);
    }
}
