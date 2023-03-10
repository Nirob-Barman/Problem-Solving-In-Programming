#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c))
    {
        if(a==0 && b==0 && c==0)
            break;
        int p=cbrt(a*b*c);
        printf("%d\n",p);
    }
}
