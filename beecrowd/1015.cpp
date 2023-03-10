#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
    double x,y,a,b;
    cin>>x>>y>>a>>b;
    cout<<fixed<<setprecision(4);
    cout<<""<<sqrt(pow(x-a,2)+pow(y-b,2))<<endl;
}
