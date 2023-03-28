#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l, r;
        scanf("%d %d", &l, &r);
        printf("%d\n", (l == r) ? 1 : (2 * (r - l) + 1));
        /**
        if(l==r)
            printf("1\n");
        else
            printf("%d\n",(2*(r-l)+1));
        **/
    }
}
