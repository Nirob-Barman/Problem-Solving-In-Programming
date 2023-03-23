#include <bits/stdc++.h>

int main()
{
    int h, m, i, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%02d:%02d", &h, &m);
        /// printf("%02d:%02d\n", h, m);
        m = 60 - m;
        m %= 60;

        h = 12 - h;

        if (m != 0)
            h--;
        h = 12 + h;
        h %= 12;
        if (h == 0)
            h = 12;
        printf("%02d:%02d\n", h, m);
    }
}
