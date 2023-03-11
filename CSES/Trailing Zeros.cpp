#include<bits/stdc++.h>

int findTrailingZeros(int n)
{
    if (n < 0) // Negative Number Edge Case
        return -1;

    int trailingZeroCount = 0;

    for (int i = 5; n / i >= 1; i *= 5)
        trailingZeroCount += n / i;

    return trailingZeroCount;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", findTrailingZeros(n));
}
