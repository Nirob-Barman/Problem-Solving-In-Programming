#include<bits/stdc++.h>

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main()
{
    int mod = 1000000007;
    int n;
    scanf("%d", &n);
    printf("%lld\n", binpow(2, n, mod));
}
