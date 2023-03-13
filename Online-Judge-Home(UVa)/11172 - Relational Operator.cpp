#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc, a, b;
    scanf("%d", &tc);
    while (tc--)
    {
        scanf("%d %d", &a, &b);
        if (a > b)
            printf(">");
        else if (a == b)
            printf("=");
        else
            printf("<");
        printf("\n");
    }
}
