#include <bits/stdc++.h>

int main()
{
    int t, m = 0, d = 0;
    char a[100];
    scanf("%d", &t);

    while (t--)
    {
        scanf("%s", a);
        if (strcmp(a, "donate") == 0)
        {
            scanf("%d", &d);
            m += d;
        }
        else
            printf("%d\n", m);
    }

    return 0;
}
