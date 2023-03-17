#include <bits/stdc++.h>

int main()
{
    long long int a, b, ra, rb, sum, t, count;
    while (scanf("%lld %lld", &a, &b) == 2)
    {
        if (a < b)
        {
            t = a;
            a = b;
            b = t;
        }
        count = 0;
        sum = 0;
        if (a == 0 && b == 0)
            break;
        else
        {
            while (a != 0)
            {
                ra = a % 10;
                rb = b % 10;
                a = a / 10;
                b = b / 10;
                sum = ra + rb + sum;
                if (sum > 9)
                {
                    count++;
                    sum = sum / 10;
                }
                else
                    count = 0;
            }
            if (count == 0)
                printf("No carry operation.\n");
            else if (count == 1)
            {
                printf("%lld carry operation.\n", count);
            }
            else if (count > 1)
                printf("%lld carry operations.\n", count);
        }
    }
}
