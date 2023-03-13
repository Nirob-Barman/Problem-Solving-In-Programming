#include <bits/stdc++.h>

int main()
{
    char a[10], ch;
    int t, i;
    // one

    scanf("%d %c", &t, &ch);
    for (i = 1; i <= t; i++)
    {
        gets(a);
        if (strlen(a) == 5)
            printf("3\n");
        else if (a[0] == 'o' && a[1] == 'n' || a[0] == 'o' && a[1] == 'e' || a[1] == 'n' && a[2] == 'e' || a[0] == 'o' && a[2] == 'n' || a[0] == 'o' && a[2] == 'e')
            printf("1\n");
        else
            printf("2\n");
    }
}
