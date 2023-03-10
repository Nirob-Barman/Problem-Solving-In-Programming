#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double r,a;
    cin>>r;
    a=3.14159*r*r;
    cout<<fixed;
    cout<<setprecision(4);
    cout<<"A="<<a<<endl;
}
