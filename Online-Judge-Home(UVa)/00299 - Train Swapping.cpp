#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int swapCount = 0, a[n], i, j;
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;

                    swapCount++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", swapCount);
    }
}
