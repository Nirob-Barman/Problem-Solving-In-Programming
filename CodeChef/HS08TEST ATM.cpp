#include <bits/stdc++.h>

int main()
{
    int x;
    float y;
    scanf("%d %f", &x, &y);

    if (x % 5 == 0 && x <= y - 0.50)
        printf("%0.2f\n", y - x - 0.50);
    else
        printf("%0.2f\n", y);
}
