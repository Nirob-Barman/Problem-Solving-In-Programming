#include <bits/stdc++.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
        printf("1\n");
    else if (n < 4)
    {
        printf("NO SOLUTION\n");
    }
    else if (n == 4)
    {
        printf("3 1 4 2\n");
    }
    else
    {
        for (int i = 1; i <= n; i += 2)
            printf("%d ", i);
        for (int i = 2; i <= n; i += 2)
        {
            printf("%d ", i);
            if (i == n)
                printf("\n");
        }
    }
}
