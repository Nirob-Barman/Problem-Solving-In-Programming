#include <bits/stdc++.h>

int main()
{
    int n, t = 4, weekCount = 0;
    while (t--)
    {
        scanf("%d", &n);
        if (n >= 10)
            weekCount++;
    }
    printf("%d\n", weekCount);
}
