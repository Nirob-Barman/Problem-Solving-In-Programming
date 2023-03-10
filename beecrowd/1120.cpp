#include<iostream>

using namespace std;

int main()
{
    string num;
    int d,k,i;
    while(scanf("%d",&d)!=EOF)
    {
        getchar();
        getline(cin,num);
        for(i=0;num[i];i++)
        {
            if(num[i]-'0'==d)
            {
                num.erase(i,1);
            }
        }
        cout<<num<<endl;
    }
}
