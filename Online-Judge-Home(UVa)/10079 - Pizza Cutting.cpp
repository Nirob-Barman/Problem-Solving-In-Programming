#include <bits/stdc++.h>

int main()
{
    long int n;

    while (scanf("%ld", &n) == 1)
    {
        if (n >= 0 && n <= 210000000)
            printf("%ld\n", (n * (n + 1) / 2) + 1);
        else
            break;
    }
}
