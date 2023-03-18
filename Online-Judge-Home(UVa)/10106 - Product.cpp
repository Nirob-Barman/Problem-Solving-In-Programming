#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[260],b[260];
    int i,j,l;
    while(scanf("%s %s",a,b)!=EOF)
    {
        ///cout<<a<<b<<endl;
        int la=strlen(a),lb=strlen(b);
        int mul[la+lb]={0};

        reverse(a,a+la);
        reverse(b,b+lb);


        for(i=0;i<la;i++)
        {
            for(j=0;j<lb;j++)
            {
               mul[i+j]+=(a[i]-'0')*(b[j]-'0');
               mul[i+j+1]+=mul[i+j]/10;
               mul[i+j]=mul[i+j]%10;
            }
        }

        l=la+lb;
        l-=1;
        while(mul[l]==0 && l>0)
            l--;
        /**
        for(i=l;i>=0;i--)
            cout<<mul[i];
        **/
        for(;l>=0;l--)
            cout<<mul[l];
        cout<<endl;
    }
}
