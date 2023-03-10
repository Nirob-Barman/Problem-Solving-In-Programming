#include<iostream>
#include<cstdio>

using namespace std;

int main()
{

    {
    double a,b,c;
    cin>>a>>b>>c;
    if(a<b)
        swap(a,b);
    if(b<c)
        swap(b,c);
    if(a<b)
        swap(a,b);
    ///cout<<a<<b<<c<<endl;
    if(a>=b+c)
        printf("NAO FORMA TRIANGULO\n");
    else
    {
        if(a*a==b*b+c*c)
            printf("TRIANGULO RETANGULO\n");
        if(a*a>b*b+c*c)
            printf("TRIANGULO OBTUSANGULO\n");
        if(a*a<b*b+c*c)
            printf("TRIANGULO ACUTANGULO\n");
        if(a==b && b==c)
            printf("TRIANGULO EQUILATERO\n");
        if((a==b && (a!=c || b!=c)) ||(b==c) && (a!=b || (a!=c)))
            printf("TRIANGULO ISOSCELES\n");
    }
    }
}
