#include <bits/stdc++.h>

long long bigmod(long long a, long long b, long long m)
{
    a %= m;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main()
{
    long long b, p, m;
    while (scanf("%ld %ld %ld", &b, &p, &m) != EOF)
    {
        printf("%ld\n", bigmod(b, p, m));
    }
}
