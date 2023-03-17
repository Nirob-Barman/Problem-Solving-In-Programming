#include <bits/stdc++.h>

int main()
{
    int t, k, n, i, max, min;
    scanf("%d", &t);
    for (k = 1; k <= t; k++)
    {
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        max = a[0], min = a[0];
        for (i = 0; i < n; i++)
        {
            if (a[i] > max)
                max = a[i];
            else if (a[i] < min)
                min = a[i];
        }
        // printf("%d %d\n",max,min);
        printf("%d\n", (max - min) * 2);
    }
}
