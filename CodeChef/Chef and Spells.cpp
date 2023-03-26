#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int maxHitPoints = 0;
        if (a + b >= maxHitPoints)
            maxHitPoints = a + b;
        if (b + c >= maxHitPoints)
            maxHitPoints = b + c;
        if (c + a >= maxHitPoints)
            maxHitPoints = a + c;
        printf("%d\n", maxHitPoints);
    }
}
