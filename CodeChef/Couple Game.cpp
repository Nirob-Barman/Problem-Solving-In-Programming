#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int g, b;
        scanf("%d %d", &g, &b);
        swap(g, b);
        printf("%d\n", g - b);
    }
}
