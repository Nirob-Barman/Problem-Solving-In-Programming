#include <bits/stdc++.h>

int main()
{
    int a, b, i, j;

    while (scanf("%d %d", &a, &b))
    {
        if (a == 0 && b == 0)
            break;
        j = 0;
        for (a = a; a <= b; a++)
        {
            i = sqrt(a);
            if (a == i * i)
            {
                j++;
            }
        }
        printf("%d\n", j);
    }
}
