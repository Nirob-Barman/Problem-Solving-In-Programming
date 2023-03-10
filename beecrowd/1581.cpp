#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
    bool check;
    int t;
    scanf("%d",&t);
    getchar();

    for(int k=0;k<t;k++)
    {
        int n;
        scanf("%d",&n);

        check=false;
        getchar();

        string s,temp;

        for(int i=1;i<=n;i++)
        {
            getline(cin,s);
            ///cout<<s<<endl;

            if(i==1)
                temp=s;
            if(temp!=s)
                check=true;
        }
        if(check)
            printf("ingles\n");
        else
            cout<<s<<endl;
    }
}
