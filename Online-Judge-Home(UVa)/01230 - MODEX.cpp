#include <iostream>

using namespace std;

long long binpow(long long a, long long b, long long m)
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
    int t;
    while (scanf("%d", &t) && t)
    {
        while (t--)
        {
            long long x, y, n;
            scanf("%ld %ld %ld", &x, &y, &n);
            printf("%ld\n", binpow(x, y, n));
        }
    }
}
