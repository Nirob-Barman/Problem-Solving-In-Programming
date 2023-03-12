#include <bits/stdc++.h>

int main()
{
    char s[10];
    int k = 1;
    while (scanf("%s", s) != EOF)
    {
        if (!strcmp(s, "Hajj"))
            printf("Case %d: Hajj-e-Akbar\n", k++);
        else if (!strcmp(s, "Umrah"))
            printf("Case %d: Hajj-e-Asghar\n", k++);
        else if (!strcmp(s, "*"))
            break;
    }
}
