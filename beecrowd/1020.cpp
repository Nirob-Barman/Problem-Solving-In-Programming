#include<iostream>

using namespace std;

int main()
{
    int year;
    cin>>year;

    cout<<""<<year/365<<" ano(s)"<<endl;
    year%=365;
    cout<<""<<year/30<<" mes(es)"<<endl;
    year%=30;
    cout<<""<<year<<" dia(s)"<<endl;
}
