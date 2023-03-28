#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, s, second, maxDif = INT_MIN, difference;
        scanf("%d %d", &n, &s);
        for (int i = 0; i <= min(n, s); i++)
        {
            second = s - i;
            if (second + i == s)
            {
                if (second <= n)
                    difference = fabs(second - i);
                else
                    continue;
            }
            if (difference > maxDif)
                maxDif = difference;
        }
        printf("%d\n", maxDif);
    }
}
