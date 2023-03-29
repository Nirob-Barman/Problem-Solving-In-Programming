#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);
        int evenIndex = n / 2;
        int oddIndex = n - evenIndex;
        /// printf("%d %d\n",oddIndex, evenIndex);
        printf("%d\n", oddIndex * a + evenIndex * b);
    }
}
