#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", ((n * (n + 1) / 2) % 2 == 0 ? n : n - 1));
    }
}
