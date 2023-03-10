#include<iostream>
#include<cstring>


using namespace std;

int main()
{
    char s[15];
    while(gets(s))
    {
        //cout<<s<<endl;
        char a;
    int i;

    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='+'||s[i]=='=')
            s[i]=' ';
        else if(s[i]=='R'||s[i]=='L'||s[i]=='J')
        {
            a=s[i];
            s[i]=' ';
        }

    }
    long int x=0,y=0;
    ///cout<<s<<endl;
    if(a=='J')
    {
        /*stringstream ss(s);
        string word;
        while(ss>>word)
        {
            x+=stoi(word);
            ///cout<<x<<endl;
        }
        cout<<x<<endl;*/
        char *pend;
        long int a,b;
        a=strtol(s,&pend,10);
        b=strtol(pend,&pend,10);
        cout<<a+b<<endl;
    }
    else
    {
        char *pend;
        long int a,b;
        a=strtol(s,&pend,10);
        b=strtol(pend,&pend,10);
        cout<<b-a<<endl;
    }
    }
}
