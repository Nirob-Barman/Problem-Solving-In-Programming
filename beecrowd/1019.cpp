#include<iostream>

using namespace std;

int main()
{
    int n,h,m,s;
    cin>>n;
    h=n/3600;
    s=n%3600;
    m=s/60;
    s=s%60;
    cout<<""<<h<<":"<<m<<":"<<s<<endl;
}
