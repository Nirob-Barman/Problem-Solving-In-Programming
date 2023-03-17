#include <bits/stdc++.h>

int main()
{
    unsigned int n, sum;
    while (scanf("%d", &n) != EOF && n != 0)
    {
        sum = 0;
        while (1)
        {
            while (n > 0)
            {
                sum += (n % 10);
                /// printf("%u\n",sum);
                n = n / 10;
                /// printf("%u\n",n);
            }
            if (sum / 10 == 0)
                break;
            else
            {
                n = sum;
                sum = 0;
            }
        }
        printf("%u\n", sum);
    }
}
