#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        if (x >= 1 && x < 100)
            printf("Easy\n");
        else if (x >= 100 && x < 200)
            printf("Medium\n");
        else
            printf("Hard\n");
    }
}
