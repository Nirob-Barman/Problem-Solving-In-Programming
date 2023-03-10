#include<iostream>
#include<map>
#include<iterator>
#include<algorithm>

using namespace std;

bool compare(int i,int j)
{
    return i>j;
}

int main()
{
    string s;
    int i;
    while(getline(cin,s))
    {
        map<char,int>m;
        map<char,int>::reverse_iterator it;
        sort(s.begin(),s.end());
        for(i=0;s[i];i++)
            m[s[i]]++;

        for(it=m.rbegin();it!=m.rend();it++)
            cout<<(int)it->first<<" "<<it->second<<endl;
    }
}
