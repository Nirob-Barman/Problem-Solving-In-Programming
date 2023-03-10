#include<bits/stdc++.h>

using namespace std;

bool subseq(const string &b,const string &a)
{
    int i=0,j=0;

    while(i<a.size() && j<b.size())
    {
        if(a[i]==b[j])
            j++;
        ///printf("%d %d %c %c\n",i,j,a[i],b[i]);
        i++;
    }
    return (j==b.size());
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string s;
        cin>>s;

        int q;
        cin>>q;
        while(q--)
        {
            string item;
            cin>>item;
            if(subseq(item,s))
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
}
