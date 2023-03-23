#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char s[350];
        int data[350];
        gets(s);

        stringstream in(s);
        int len = 0;

        while (in >> data[len])
        {
            /// printf("%d\n",data[len]);
            len++;
        }
        int ans = 0;
        for (int i = 0; i < len; i++)
        {
            for (int j = i + 1; j < len; j++)
            {
                ans = max(ans, gcd(data[i], data[j]));
            }
        }
        printf("%d\n", ans);
    }
}
