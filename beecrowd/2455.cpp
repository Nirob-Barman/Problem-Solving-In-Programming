#include<cstdio>

using namespace std;

int main()
{
    int a,b,c,d,x,y;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    x=a*b;
    y=c*d;
    if(x<y)
        printf("1\n");
    else if(x>y)
        printf("-1\n");
    else
        printf("0\n");
}
