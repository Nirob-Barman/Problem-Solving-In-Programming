#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main()
{
    int v[123],x=0;
    for(int i=48;i<=57;i++)///0-9
    {
        v[i]=x;
        x++;
    }
    for(int i=65;i<=90;i++)
    {
        v[i]=x;
        x++;
    }
    for(int i=97;i<=122;i++)
    {
        v[i]=x;
        x++;
    }

    string a;

    while(cin>>a)
    {
        int m=0,c=0,f=0;

        if(a[0]=='-')
            a=a.substr(1);

        for(int ch : a)
        {
            c=v[ch];///c is the index value of V and 1is 1 9 is 9 A is 10 z is 61
            ///printf("%d\n",c);
            f+=c;
            ///printf("%d %d\n",c,f);


            /**
            for 51
                f=5+1=6
                    since m<62 && !(f%m)==0 so result=m+1=7
            **/
            ///for 0 ,1 2, result would be 2
            if(c>m)
                m=c;
        }
        if(f<3)
            printf("2\n");
        else
        {
            while(m<62)
            {
                ///printf("m=%d\n",m);
                if(f%m==0)
                {
                    printf("%d\n",m+1);
                    break;
                }
                ///printf("m=%d\n",m);
                m++;
            }
            if(m==62)
                printf("such number is impossible!\n");
        }

    }
}
