#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc, cc = 1, a, b, c;
    scanf("%d", &tc);
    while (tc--)
    {
        scanf("%d %d %d", &a, &b, &c);
        printf("Case %d: ", cc++);
        if ((a < b && b < c) || (c < b && b < a))
            printf("%d\n", b);
        else if ((b < c && c < a) || (a < c && c < b))
            printf("%d\n", c);
        else
            printf("%d\n", a);
    }
}
