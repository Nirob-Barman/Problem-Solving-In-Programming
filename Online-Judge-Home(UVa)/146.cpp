#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        if(s[0]=='#')
            break;
        if(next_permutation(s.begin(),s.end())==1)
            cout<<s<<endl;
        else
            printf("No Successor\n");
    }
}
