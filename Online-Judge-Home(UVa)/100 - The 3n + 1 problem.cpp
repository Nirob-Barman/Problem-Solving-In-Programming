#include <stdio.h>

int main()
{
    int a, b, i, n, max, c, swap, ta, tb;
    while (scanf("%d %d", &a, &b) != EOF && a != 0 && b != 0) // while(scanf("%d %d",&a,&b)==2)
    {
        max = 0;
        ta = a;
        tb = b;
        if (ta > tb)
        {
            swap = ta;
            ta = tb;
            tb = swap;
        }
        for (i = ta; i <= tb; i++)
        {
            c = 1;
            n = i;
            while (n != 1)
            {
                if (n % 2 != 0)
                    n = 3 * n + 1;
                else if (n % 2 == 0)
                    n = n / 2;
                c++;
            }
            if (c >= max)
                max = c;
        }
        printf("%d %d %d\n", a, b, max);
    }
}
