#include<set>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    set<string>s;
    string y;
    while(cin>>y)
        s.insert(y);

    cout<<s.size()<<endl;
}
