/**
C(n, k) = n! / (n-k)! * k!
        = [n * (n-1) *....* 1]  / [ ( (n-k) * (n-k-1) * .... * 1) *
                                    ( k * (k-1) * .... * 1 ) ]
After simplifying, we get
C(n, k) = [n * (n-1) * .... * (n-k+1)] / [k * (k-1) * .... * 1]

Also, C(n, k) = C(n, n-k)  // we can change r to n-r if r > n-r
**/
#include <bits/stdc++.h>

int main()
{
    int i, n, k;
    long long int ncr;

    while (scanf("%d %d", &n, &k) && (n || k))
    {
        /// printf("%d %d\n",n,k);

        ncr = 1;

        if (k > n - k)
            k = n - k;

        for (i = 0; i < k; i++)
        {
            ncr *= (n - i);
            ncr /= (i + 1);

            /// ncr=(n-i)/(i+1); ///according to the formula
        }

        printf("%lld\n", ncr);
    }
}
