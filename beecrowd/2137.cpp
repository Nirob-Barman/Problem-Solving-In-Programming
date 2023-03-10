#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        string a[n];
        char x[5];
        int s[n];
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a[i]=x;
            s[i]=atoi(x);
        }
        /**
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
            printf("%d\n",s[i]);
        }
        **/
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(s[j]>s[j+1])
                {
                    swap(s[j],s[j+1]);
                    swap(a[j],a[j+1]);
                }
            }
        }
        for(int i=0;i<n;i++)
            cout<<a[i]<<endl;
    }
}
