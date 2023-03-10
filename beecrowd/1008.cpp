#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int number,workhour;
    double salary;
    cin>>number>>workhour>>salary;
    cout<<"NUMBER = "<<number<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"SALARY = U$ "<<workhour*salary<<endl;
}
