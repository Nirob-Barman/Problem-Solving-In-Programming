#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    while (scanf("%d", &n) != EOF && n)
    {
        int a[n];
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        sort(a, a + n);
        for (i = 0; i < n - 1; i++)
            printf("%d ", a[i]);
        printf("%d\n", a[n - 1]);
    }
}
