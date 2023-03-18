#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int sum = n % 10;
        while (n != 0)
        {
            int r = n % 10;
            n /= 10;
            if (n == 0)
                sum += r;
        }
        printf("%d\n", sum);
    }
}
