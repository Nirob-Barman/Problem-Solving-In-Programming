#include<iostream>
#include<sstream>
#include<vector>
#include<cstring>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    cin.ignore();
    while(t--)
    {
        string s,str;
        getline(cin,s);
        stringstream ss(s);
        vector<string>v;
        int count=0;
        while(ss>>s)
        {
            count++;
            v.push_back(s);
        }

        int i,j;
        for(i=0;i<count-1;i++)
        {
            for(j=0;j<count-i-1;j++)
            {
                if(v[j].size()<v[j+1].size())
                    swap(v[j],v[j+1]);
            }
        }
        for(i=0;i<count;i++)
        {
            if(i!=count-1)
                cout<<v[i]<<" ";
            else
                cout<<v[i]<<endl;
        }
    }
}
