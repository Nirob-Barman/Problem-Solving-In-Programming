#include <iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        if (b % a == 0)
            printf("%d %d\n", a, b);
        else
            printf("-1\n");
    }
}
