#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double r,volume;
    cin>>r;
    cout<<fixed<<setprecision(3);
    volume=(4.0/3)*3.14159*r*r*r;
    cout<<"VOLUME = "<<volume<<endl;
}
