#include<iostream>
#include<cstdio>
#include<string>
#include<iostream>

///https://github.com/morris821028/UVa/blob/master/volume101/10176%20-%20Ocean%20Deep%20%20-%20Make%20it%20shallow.cpp
using namespace std;

void check(string s)
{
    int ans=0;
    for(int i=0;s[i]!='\0';i++)
    {
        int k=s[i]-'0';
        ///ans=ans*2+k;
        ans=(ans<<1)+k;
        ///printf("%d\n",ans);
        ans%=131071;
    }
    if(!ans)
        printf("YES\n");
    else
        printf("NO\n");
}

int main()
{
    string line;
    while(cin>>line)
    {
        char c;
        if(line.back()!='#')
        {
            cin>>c;
            line+=c;
        }

        string s="";
        int i=0;
        while(line[i]!='#')
        {
            s+=line[i];
            i++;
        }
        check(s);
    }
}
