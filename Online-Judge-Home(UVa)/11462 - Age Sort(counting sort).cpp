#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, k, acount[100] = {0}, index, item, c = 0;
    while (scanf("%d", &n) != EOF && n != 0)
    {
        int a[n], b[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &index);
            acount[index]++;
        }
        /// k=0;
        c = 0;
        for (i = 0; i < 100; i++)
        {
            for (j = 0; j < acount[i]; j++)
            {
                if (c == n - 1)
                    printf("%d\n", i);
                else
                    printf("%d ", i);
                /// b[k]=i;
                /// k++;
                c++;
            }
        }
        /*for(k=0;k<n-1;k++)
            printf("%d ",b[k]);
            printf("%d\n",b[n-1]);*/
    }
}
