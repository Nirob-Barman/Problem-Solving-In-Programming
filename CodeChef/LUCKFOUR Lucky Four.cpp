#include <bits/stdc++.h>

int main()
{
    int n;
    scanf("%d", &n);

    char s[10];
    while (n--)
    {
        scanf(" %s", s);
        int c = 0;
        for (int i = 0; s[i]; i++)
        {
            if (s[i] == '4')
                c++;
        }
        printf("%d\n", c);
    }
}
