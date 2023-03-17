#include <bits/stdc++.h>

using namespace std;
/**
https://mathworld.wolfram.com/GaussianPrime.html
**/

bool prime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        bool chkprime = false;
        scanf("%d %d", &a, &b);

        if (a < 0)
            a = -a;
        if (b < 0)
            b = -b;

        if (a != 0 && b != 0)
            chkprime = prime(a * a + b * b);
        else if (b == 0)
        {
            if (prime(a) && (a - 3) % 4 == 0)
            {
                chkprime = true;
            }
        }
        else if (a == 0)
        {
            if (prime(b) && (b - 3) % 4 == 0)
                chkprime = true;
        }
        if (chkprime == true)
            printf("P\n");
        else
            printf("C\n");
    }
}
