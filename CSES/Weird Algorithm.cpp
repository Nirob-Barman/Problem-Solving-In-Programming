#include <bits/stdc++.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    printf("%lld", n);
    while (n != 1)
    {
        if (n % 2)
        {
            n = 3 * n + 1;
            printf(" %lld", n);
        }
        else
        {
            n = n / 2;
            printf(" %lld", n);
        }
    }
}
