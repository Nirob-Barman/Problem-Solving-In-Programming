#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
#define x first
#define y second

int gcd;

pii extend(int a, int b) /// returns x , y    |  ax + by = g c d ( a , b )
{
    if (b == 0)
    {
        gcd = a;
        return pii(1, 0);
    }
    else
    {
        pii d = extend(b, a % b);
        return pii(d.y, d.x - d.y * (a / b));
    }
}

int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        pii ans = extend(a, b);
        printf("%d %d %d\n", ans.x, ans.y, gcd);
    }
}
