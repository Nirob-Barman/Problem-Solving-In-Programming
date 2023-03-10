#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b),(a||b))
    {
        int sum=a+b;
        char s[20];
        string zero="";
        sprintf(s,"%d",sum);

        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]!='0')
                zero.push_back(s[i]);
        }
        cout<<zero<<endl;
    }
}
