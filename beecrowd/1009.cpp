#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    char name[20];
    double salary,totalsold,salaryincrease;
    cin>>name>>salary>>totalsold;
    salaryincrease=(totalsold*15)/100.0;
    cout<<fixed<<setprecision(2);
    cout<<"TOTAL = R$ "<<salary+salaryincrease<<endl;
}
