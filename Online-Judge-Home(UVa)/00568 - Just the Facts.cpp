#include <bits/stdc++.h>

int digits[10] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};

int lastnonzero(int n)
{
    if (n < 10)
        return digits[n];
    if (((n / 10) % 10) % 2 == 0)
        return (6 * lastnonzero(n / 5) * digits[n % 10]) % 10;
    else
        return (4 * lastnonzero(n / 5) * digits[n % 10]) % 10;
}

int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        printf("%5d -> %d\n", n, lastnonzero(n));
    }
}
