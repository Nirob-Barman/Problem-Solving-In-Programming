#include<bits/stdc++.h>

using namespace std;

map<string,string>mymap;

int main()
{
    int n,c,i,dif;
    string name,sign;
    while(cin>>n  and n)
    {
        c=0;
        while(n--)
        {
            cin>>name>>sign;
            ///mymap.insert(pair<string,string>(name,sign));
            mymap[name]=sign;
            ///cout<<mymap[name]<<endl;
        }
        cin>>n;
        while(n--)
        {
            cin>>name>>sign;
            string temp=mymap[name];///Mapping to previous name
            dif=0;
            for(i=0;i<temp.size();i++)
            {
                //cout<<temp[i]<<" "<<sign[i]<<endl;
                if(temp[i]!=sign[i])
                {
                    dif++;
                }
            }
            if(dif>1)
            {
                c++;
            }
        }
        printf("%d\n",c);
    }
}
