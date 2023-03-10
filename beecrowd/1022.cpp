#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int gcdfun(int a,int b)
{
    if(b%a==0)
        return a;
    else
        return gcdfun(b,a%b);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int none,done,ntwo,dtwo;
        char c;
        int nominator,denominator;
        scanf("%d / %d %c %d / %d",&none,&done,&c,&ntwo,&dtwo);
        ///printf("%d/%d%c%d/%d\n",none,done,c,ntwo,dtwo);
        if(c=='/')
        {
            nominator=none*dtwo;
            denominator=ntwo*done;
        }
        else
        {
            denominator=done*dtwo;
            if(c=='+')
            {
                nominator=(none*dtwo)+(ntwo*done);
            }
            else if(c=='-')
            {
                nominator=(none*dtwo)-(ntwo*done);
            }
            else
            {
                nominator=none*ntwo;
            }
        }
        int gcd=gcdfun(nominator,denominator);
        if(gcd<0)
            gcd=-gcd;
        printf("%d/%d = %d/%d\n",nominator,denominator,nominator/gcd,denominator/gcd);
    }
}
