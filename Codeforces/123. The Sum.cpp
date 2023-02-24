#include <iostream>
#include <cstdio>

using namespace std;

void solve(int n)
{
    if (n == 1)
    {
        printf("1\n");
    }
    if (n == 2)
        printf("2\n");
    int a[n + 1];
    a[1] = a[2] = 1;
    int sum = 2;
    for (int i = 3; i <= n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
        sum += a[i];
    }
    printf("%d\n", sum);
}

int main()
{
    int n;
    scanf("%d", &n);
    solve(n);
}
