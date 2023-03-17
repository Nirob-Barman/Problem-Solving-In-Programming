#include <iostream>
#include <cstdio>
#include <iostream>

using namespace std;

int prime[1300]; /// 1229 prime numbers
int consecutivesum[10001] = {};

void sieve()
{
    bool num[10004] = {false};
    num[0] = true;
    num[1] = true;

    int k = 0;
    for (int i = 2; i <= 10004; i++)
    {
        if (num[i] == false)
        {
            prime[k++] = i;
            for (int j = i * i; j <= 10004; j += i)
                num[j] = true;
        }
    }
    /// printf("%d\n",k);    ///number of primes
    for (int i = 0; i < k; i++)
    {
        int sum = 0;
        for (int j = i; j < k; j++)
        {
            sum += prime[j];
            if (sum > 10000)
                break;
            consecutivesum[sum]++;
        }
    }
}

int main()
{
    sieve();
    int n;
    while (scanf("%d", &n) && n)
        printf("%d\n", consecutivesum[n]);
}
