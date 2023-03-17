#include <bits/stdc++.h>

int main()
{
    int a, b, c, d, degree;
    while (scanf("%d %d %d %d", &a, &b, &c, &d) != EOF)
    {
        if (!a && !b && !c && !d)
            break;
        degree = 1080 + ((a - b + 40) % 40 + (c - b + 40) % 40 + (c - d + 40) % 40) * 9;
        printf("%d\n", degree);
    }
}
