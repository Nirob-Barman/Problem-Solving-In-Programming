#include <bits/stdc++.h>

int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        int a[n], i, j, b[n - 1];
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (i = 0; i < n - 1; i++)
            b[i] = fabs(a[i] - a[i + 1]);
        /*
        for(i=0;i<n-1;i++)
            printf("%d\n",b[i]);
        */
        for (i = 0; i < n - 1 - 1; i++)
        {
            for (j = 0; j < n - i - 1 - 1; j++)
            {
                if (b[j] > b[j + 1])
                {
                    int swap = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = swap;
                }
            }
        }
        /*for(i=0;i<n-1;i++)
            printf("%d\n",b[i]);*/
        int c = 0;
        for (i = 0; i < n - 1; i++)
        {
            if (b[i] == i + 1)
                c++;
        }
        if (c == n - 1)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
}
