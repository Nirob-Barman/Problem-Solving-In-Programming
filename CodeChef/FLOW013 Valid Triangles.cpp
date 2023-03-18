#include <bits/stdc++.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (a + b + c == 180)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
