#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;
typedef vector<int> vi;

bitset<110> numbers;

ll Sieve_Size;
vi Primes;

int Prime_Factor[110];

void sieve(ll n)
{
    Sieve_Size = n + 1;
    numbers.set();

    numbers[0] = numbers[1] = 0;

    for (int i = 2; i < Sieve_Size; i++)
    {
        if (numbers[i]) /// if prime
        {
            Primes.push_back(i);
            for (int j = i * i; j < Sieve_Size; j += i)
            {
                numbers[j] = 0;
            }
        }
    }
}

int count = 0;

void Factorize(int n)
{
    for (int i = 0; Primes[i] * Primes[i] <= n; i++)
    {
        if (n % Primes[i] == 0)
        {
            while (n % Primes[i] == 0)
            {
                n /= Primes[i];
                Prime_Factor[Primes[i]]++;
            }
        }
    }
    if (n != 1)
        Prime_Factor[n]++;
}

void factfactorize(int n)
{
    int table[110], c = 0;
    for (int i = 0; i < Primes.size() && Primes[i] <= n; i++)
    {
        int x = n;
        int freq = 0;

        while (x / Primes[i])
        {
            freq += x / Primes[i];
            x /= Primes[i];
        }
        table[c++] = freq;
    }

    printf("%3d! =", n);

    int count = 0;
    for (int i = 0; i < c; i++)
    {
        count++;
        if (count > 15)
            count -= 15, printf("\n      ");
        printf("%3d", table[i]);
    }
}

int main()
{
    sieve(110);
    int n;
    while (cin >> n && n)
    {
        factfactorize(n);
        puts("");
    }
}
