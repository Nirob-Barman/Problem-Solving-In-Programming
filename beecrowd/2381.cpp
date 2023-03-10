#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<string>name;
    string s;
    int t,c;
    scanf("%d %d",&t,&c);
    while(t--)
    {
        cin>>s;
        name.insert(s);
    }
    int j=1;
    for(auto &i: name)
    {
        if(j==c)
        {
            cout<<i<<endl;
            break;
        }
        j++;
    }
}
