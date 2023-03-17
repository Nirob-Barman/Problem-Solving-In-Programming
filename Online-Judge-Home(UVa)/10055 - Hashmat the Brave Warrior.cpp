#include <bits/stdc++.h>

int main()
{
    unsigned long int a, b, dif;
    while (scanf("%lu %lu", &a, &b) != EOF)
    {
        if (a < b)
            dif = b - a;
        else
            dif = a - b;
        printf("%lu\n", dif);
    }

    return 0;
}
