#include<stdio.h>
#include<string.h>

int main()
{
    int ssl,sl,i,j,k,l,c=0,cto,save,temp,total;
    char s[100],ss[100];
    while(scanf("%s%s",ss,s)!=EOF)
    {
        total=0;
        ssl=strlen(ss);
        sl=strlen(s);
        for(i=0,c++;i<=sl-ssl;i++)
        {
            if(s[i]==ss[0])
            {
                cto=1;
                temp=i+1;
                for(k=i+1,l=1;ss[l];l++,k++)
                {
                    if(s[k]==ss[l])
                        cto++;
                    else
                        break;
                }
                if(cto==ssl)
                {
                    total++;
                    save=temp;
                }
            }
        }
        printf("Caso #%d:\n",c);
        if(total==0)
            printf("Nao existe subsequencia\n\n");
        else
        {
            printf("Qtd.Subsequencias: %d\n",total);
            printf("Pos: %d\n\n",save);
        }
    }
}
