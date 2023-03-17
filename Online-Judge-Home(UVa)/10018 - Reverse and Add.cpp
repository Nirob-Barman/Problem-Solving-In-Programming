#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int n, rev, num;
        scanf("%lld", &n);
        int c = 0;
        for (;;)
        {
            num = n;
            rev = 0;

            while (n != 0)
            {
                long long int d = (n % 10);
                rev = rev * 10 + d;
                n /= 10;
            }
            if (num - rev == 0)
            {
                printf("%d %lld\n", c, num);
                break;
            }
            else
            {
                n = num + rev;
                c++;
            }
        }
    }
}
