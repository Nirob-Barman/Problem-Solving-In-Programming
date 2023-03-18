#include <bits/stdc++.h>

long long int GCD(long long int a, long long int b)
{
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}

long long int LCM(long long int a, long long int b)
{
    return (a * b / GCD(a, b));
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int n, a, b, k, win, lcm;
        scanf("%lld %lld %lld %lld", &n, &a, &b, &k);
        lcm = LCM(a, b);

        a = n / a;
        b = n / b;
        win = (a + b) - 2 * (n / lcm); /// 2 for a and b. because n(A∩B) = n(A) + n(B) - n(A U B)

        if (win >= k)
            printf("Win\n");
        else
            printf("Lose\n");
    }
}
