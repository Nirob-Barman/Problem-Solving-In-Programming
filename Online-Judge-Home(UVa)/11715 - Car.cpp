#include <bits/stdc++.h>

int main()
{
    double u, v, t, a, s;
    int n, k = 1;
    while (scanf("%d", &n) != EOF && n <= 4 && n != 0)
    {
        if (n == 1)
        {
            scanf("%lf %lf %lf", &u, &v, &t);
            s = ((u + v) / 2) * t;
            a = (v - u) / t;
            printf("Case %d: %.03lf %.03lf\n", k++, s, a);
        }
        if (n == 2)
        {
            scanf("%lf %lf %lf", &u, &v, &a);
            s = (v * v - u * u) / (2 * a);
            t = (v - u) / a;
            printf("Case %d: %.03lf %.03lf\n", k++, s, t);
        }
        if (n == 3)
        {
            scanf("%lf %lf %lf", &u, &a, &s);
            v = sqrt((u * u) + (2 * a * s));
            t = (v - u) / a;
            printf("Case %d: %.03lf %.03lf\n", k++, v, t);
        }
        if (n == 4)
        {
            scanf("%lf %lf %lf", &v, &a, &s);
            u = sqrt((v * v) - (2 * a * s));
            t = (v - u) / a;
            printf("Case %d: %.03lf %.03lf\n", k++, u, t);
        }
    }
}
