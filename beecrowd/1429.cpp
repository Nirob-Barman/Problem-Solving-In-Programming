#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;

int factorial(int n)
{
    if(n<1)
        return 1;
    else
        return (n*factorial(n-1));
}
int main()
{
    char s[5];
    while(scanf("%s",s))
    {
        if(strlen(s)==1 && s[0]=='0')
            break;
        ///printf("%s\n",s);
        int sum=0;
        int l=strlen(s);
        ///printf("%d\n",l);
        for(int i=0;s[i]!='\0';i++)
        {
            int n=s[i]-'0';
            sum+=(n*factorial(l-i));
        }
        printf("%d\n",sum);
    }
}
