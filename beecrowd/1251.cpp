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
    int i,flag;
    while(getline(cin,s))
    {
        for(i=0;s[i];i++)
        {
            if(s[i]>=48 && s[i]<=57)
            {
                flag=1;
                break;
            }
            else
            {
                flag=0;
                break;
            }
        }
        sort(s.begin(),s.end(),compare);
        map<char,int>m;
        map<char,int>::iterator it;
        map<char,int>::reverse_iterator itt;

        for(i=0;s[i];i++)
            m[s[i]]++;

        if(flag==1)
        {
            for(it=m.begin();it!=m.end();it++)
                cout<<(int)it->first<<" "<<it->second<<endl;
                cout<<endl;
        }
        else
        {
            for(itt=m.rbegin();itt!=m.rend();itt++)
                cout<<(int)itt->first<<" "<<itt->second<<endl;
                cout<<endl;
        }
    }
}
