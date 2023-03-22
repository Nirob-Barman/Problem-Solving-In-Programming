#include <bits/stdc++.h>

int main()
{
    unsigned int t, k, a, b, c, d;
    scanf("%u", &t);
    for (k = 0; k < t; k++)
    {
        scanf("%u %u %u %u", &a, &b, &c, &d);
        if (a == b && b == c && c == d && d == a)
            printf("square\n");
        else if (a == c && b == d || a == b && c == d || b == c && a == d)
            printf("rectangle\n");
        else if ((a + b + c) >= d && (b + c + d) >= a && (c + d + a) >= b && (d + a + b) >= c)
            printf("quadrangle\n");
        else
            printf("banana\n");
    }
}
