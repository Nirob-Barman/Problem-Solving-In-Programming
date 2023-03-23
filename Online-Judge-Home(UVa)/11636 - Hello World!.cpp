#include <bits/stdc++.h>

int main()
{
    int n, sum, count, i, k = 1;
    while (scanf("%d", &n) != EOF && n > 0)
    {
        sum = 1;
        count = 0;
        i = 0;
        while (sum < n)
        {
            sum = 2 * sum;
            count++;
            i++;
        }
        printf("Case %d: %d\n", k++, count);
    }
}
