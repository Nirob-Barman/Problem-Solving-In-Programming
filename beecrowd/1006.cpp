#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    a=a*2.0;
    b=b*3.0;
    c=c*5.0;
    cout<<fixed;
    cout<<setprecision(1);
    cout<<"MEDIA = "<<(a+b+c)/10<<endl;
}
