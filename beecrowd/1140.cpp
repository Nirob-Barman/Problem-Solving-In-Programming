#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while(getline(cin,s))
    {
        if(s=="*")
            break;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        ///cout<<s<<endl;
        stringstream ss(s);
        string word;
        bool check=true;
        char temp;
        int i=1;
        while(ss>>word)
        {
            if(i==1)
                temp=word[0];
            if(temp!=word[0])
            {
                check=false;
            }
            i++;
        }
        if(!check)
            printf("N\n");
        else
            printf("Y\n");
    }
}
