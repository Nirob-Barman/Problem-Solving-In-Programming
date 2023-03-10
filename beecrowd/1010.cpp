#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,d,e;
    double c,f;
    cin>>a>>b>>c;
    cin>>d>>e>>f;
    cout<<fixed<<setprecision(2);
    cout<<"VALOR A PAGAR: R$ "<<(b*c)+(e*f)<<endl;
}
