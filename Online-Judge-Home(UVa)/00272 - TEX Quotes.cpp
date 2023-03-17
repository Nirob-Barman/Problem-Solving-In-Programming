#include <bits/stdc++.h>

int main()
{
    int i, l, count = 0;
    char s[100000];
    while (scanf(" %[^\n]", s) != EOF)
    {
        l = strlen(s);
        for (i = 0; i < l; i++)
        {
            if (s[i] == '"')
            {
                count = count + 1;
                if (count % 2 != 0)
                    printf("``");
                else if (count % 2 == 0)
                    printf("''");
            }
            else
                printf("%c", s[i]);
        }
    }
}
