#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int a,b,c,fg,great;
    cin>>a>>b>>c;
    fg=(a+b+abs(a-b))/2;
    great=(c+fg+abs(c-fg))/2;
    cout<<great<<" eh o maior"<<endl;
}
