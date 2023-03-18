#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n];
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);

    sort(a, a + n);

    long long int MaxRevenue = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] * (n - i) > MaxRevenue)
            MaxRevenue = a[i] * (n - i);
    }
    printf("%lld\n", MaxRevenue);
}
