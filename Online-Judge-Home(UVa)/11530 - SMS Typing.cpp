#include <bits/stdc++.h>

int main()
{
    char a[100];
    int n, s, i, j, t;
    scanf("%d", &t);
    getchar();
    for (i = 1; i <= t; i++)
    {
        gets(a);
        s = 0;
        n = strlen(a);
        for (j = 0; j < n; j++)
        {
            if (a[j] == 'a' || a[j] == 'd' || a[j] == 'g' || a[j] == 'j' || a[j] == 'm' || a[j] == 'p' || a[j] == 't' || a[j] == 'w' || a[j] == ' ')
                s = s + 1;
            else if (a[j] == 'b' || (a[j] == 'e') || a[j] == 'h' || a[j] == 'k' || a[j] == 'n' || a[j] == 'q' || a[j] == 'u' || a[j] == 'x')
                s = s + 2;
            else if (a[j] == 'c' || (a[j] == 'f') || a[j] == 'i' || a[j] == 'l' || a[j] == 'o' || a[j] == 'r' || a[j] == 'v' || a[j] == 'y')
                s = s + 3;
            else if (a[j] == 's' || (a[j] == 'z'))
                s = s + 4;
        }
        printf("Case #%d: %d\n", i, s);
    }
    return 0;
}
