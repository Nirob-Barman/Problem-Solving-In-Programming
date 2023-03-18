#include <bits/stdc++.h>

using namespace std;

int Euler_phi_Funtion(int n)
{
    int etf = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
            }
            etf -= etf / i;
        }
    }
    if (n > 1)
        etf -= etf / n;
    return etf;
}

int main()
{
    int n;
    while (scanf("%d", &n) && n)
    {
        printf("%d\n", Euler_phi_Funtion(n));
    }
}
