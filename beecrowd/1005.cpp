#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double a,b;
    cin>>a>>b;
    a=a*3.5;
    b=b*7.5;
    cout<<fixed;
    cout<<setprecision(5);
    cout<<"MEDIA = "<<(a+b)*1.0/11<<endl;
}
