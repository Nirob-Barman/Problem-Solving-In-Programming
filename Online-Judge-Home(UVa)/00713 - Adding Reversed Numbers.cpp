#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char a[210], b[210];
        scanf("%s %s", a, b);
        int la = strlen(a), lb = strlen(b), len, i, j;

        len = la > lb ? la : lb;
        len += 1;
        int sum[len + 1] = {0};

        for (i = 0; i < len; i++)
        {
            if (i < la)
                sum[i] += a[i] - '0';
            if (i < lb)
                sum[i] += b[i] - '0';
            /// printf("%d\n",sum[i]);
            sum[i + 1] += sum[i] / 10;
            sum[i] = sum[i] % 10;
            /// printf("%d",sum[i])
        }

        j = len;
        while (sum[j] == 0)
            j--;
        len = j + 1;
        j = 0;
        while (sum[j] == 0)
            j++;
        i = j;
        for (; i < len; i++)
            cout << sum[i];
        cout << endl;
    }
}
