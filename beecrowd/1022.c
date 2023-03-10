#include<stdio.h>

int gcdfunction(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcdfunction(b,a%b);
}

int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        int a,b,c,d;
        char op;
        scanf("%d / %d %c %d / %d",&a,&b,&op,&c,&d);
        //printf("%d/%d%c%d/%d\n",a,b,op,c,d);
        if(op == '/')
        {
            //(a/b)/(c/d)==(a*d)/(b*c)
            //otherwise item the question paper carefully. they give the main hints how fraction works
            //int numerator=a*d;
            //int denogcdator=b*c;
            //int gcd=gcdfunction(numerator,denogcdator);
            int gcd=gcdfunction(a*d,b*c);

            printf("%d/%d = %d/%d\n",a*d,b*c,(a*d)/gcd,(b*c)/gcd);

        }
        else
        {
            //do simple fractional mathematics
            int max=b*d;
            int result;
            if(op == '+')
            {
                //int firstnumerator=a*(max/b);
                //int secondnumerator=c*(max/d);
                //result=firstnumerator+secondnumerator;
                result=(a*(max/b))+(c*(max/d));
            }
            else if(op == '-')
            {
                result=(a*(max/b))-(c*(max/d));
            }
            else if(op == '*')
            {
                result=a*c;
            }
            int gcd=gcdfunction(result,max);
            if(gcd<0)
                gcd=-1*gcd;
            printf("%d/%d = %d/%d\n",result,max,result/gcd,max/gcd);
        }
    }
}
