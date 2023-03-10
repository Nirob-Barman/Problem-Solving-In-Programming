#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[11];
        scanf("%s",s);
        sort(s,s+strlen(s));
        do
        {
            printf("%s\n",s);
        }while(next_permutation(s,s+strlen(s)));
        printf("\n");
    }
}
