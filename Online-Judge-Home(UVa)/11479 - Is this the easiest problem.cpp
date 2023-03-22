#include <bits/stdc++.h>

int main()
{
    long int a, b, c, i, t;

    scanf("%ld\n", &t);

    if (t < 20)

        for (i = 1; i <= t; i++)
        {
            scanf("%ld %ld %ld", &a, &b, &c);

            if (a + b > c && b + c > a && c + a > b)
            {
                if (a == b && b == c)
                    printf("Case %ld: Equilateral\n", i);
                else if (a == b || b == c || c == a)
                    printf("Case %ld: Isosceles\n", i);
                else
                    printf("Case %ld: Scalene\n", i);
            }
            else
                printf("Case %ld: Invalid\n", i);
        }
    return 0;
}
