#include<stdio.h>
#include<string.h>


int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char s[51];
        char msg[51];
        gets(s);
        ///printf("%s\n",s);
        char *token;
        token=strtok(s,". ");
        int i=0;
        while(token!='\0')
        {
            ///printf("%s\n",token);
            ///msg.push_back(token[0]);
            msg[i]=token[0];
            ///printf("%c %d\n",token[0],i);
            i++;
            token=strtok('\0',". ");
        }
        msg[i]='\0';
        printf("%s\n",msg);

    }
}
