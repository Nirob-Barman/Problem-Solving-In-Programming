#include<iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        int a=((3*x)*(3*x))+(y*y);
        int b=(2*x*x)+((5*y)*(5*y));
        int c=(-100*x)+(y*y*y);

        if(a>b && a>c)
            printf("Rafael ganhou\n");
        else if(b>a && b>c)
            printf("Beto ganhou\n");
        else
            printf("Carlos ganhou\n");
    }
}
