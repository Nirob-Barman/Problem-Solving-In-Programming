#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    cout<<fixed<<setprecision(3);
    cout<<"TRIANGULO: "<<0.5*a*c<<endl;
    cout<<"CIRCULO: "<<3.14159*c*c<<endl;
    cout<<"TRAPEZIO: "<<(a+b)*c/2<<endl;
    cout<<"QUADRADO: "<<b*b<<endl;
    cout<<"RETANGULO: "<<a*b<<endl;
}
