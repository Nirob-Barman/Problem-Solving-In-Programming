#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a, b, c;
        scanf("%d %d %d %d", &n, &a, &b, &c);
        if ((a + c) >= n && b >= n)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
