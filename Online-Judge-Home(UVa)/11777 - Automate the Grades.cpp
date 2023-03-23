#include <bits/stdc++.h>

int main()
{
    int t, k, tone, ttwo, tf, attendance, a, b, c;
    double mid, total, avg;
    scanf("%d", &t);
    for (k = 1; k <= t; k++)
    {
        mid = 0;
        scanf("%d %d %d %d %d %d %d", &tone, &ttwo, &tf, &attendance, &a, &b, &c);
        if (a <= b && a <= c)
        {
            mid = (b + c) / 2;
        }
        else if (b <= c && b <= a)
        {
            mid = (c + a) / 2;
        }
        else if (c <= a && c <= b)
        {
            mid = (b + a) / 2;
        }
        total = tone + ttwo + tf + attendance + mid;
        if (total >= 90)
            printf("Case %d: A\n", k);
        else if (total >= 80 && total < 90)
            printf("Case %d: B\n", k);
        else if (total >= 70 && total < 80)
            printf("Case %d: C\n", k);
        else if (total >= 60 && total < 70)
            printf("Case %d: D\n", k);
        else if (total < 60)
            printf("Case %d: F\n", k);
    }
}
