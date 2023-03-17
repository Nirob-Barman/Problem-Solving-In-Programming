#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[110];
    int i, j, sum[200] = {0}, maxlen = 0;
    while (scanf("%s", s) && strcmp(s, "0"))
    {
        int l = strlen(s);
        if (l > maxlen)
            maxlen = l;
        for (i = l - 1; i >= 0; i--)
        {
            /// reversing
            sum[l - i - 1] += (s[i] - '0');
            /// printf("%d\n",sum[i]);
        }
    }
    for (i = 0; i < maxlen; i++)
    {
        if (sum[i] > 9)
        {
            sum[i + 1] += sum[i] / 10;
            sum[i] = sum[i] % 10;
        }
    }
    i = maxlen;
    /// printf("%d\n",maxlen);
    while (sum[i] == 0 && i >= 0)
        i--;
    if (i == -1)
        printf("0\n");
    for (; i >= 0; i--)
        printf("%d", sum[i]);
    printf("\n");
}
