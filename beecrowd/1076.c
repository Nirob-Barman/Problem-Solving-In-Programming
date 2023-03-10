#include<stdio.h>
#include<stdbool.h>

int a[49][49];
bool visited[49];

int dfs(int parent,int v)
{
    int i,count=0;

    visited[parent]=true;

    for(i=0;i<v;i++)
    {
        if(a[parent][i]==true)
        {
            if(!visited[i])
                count+=dfs(i,v)+1;
        }
    }
    return count;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int source;
        scanf("%d",&source);
        int v,e;
        scanf("%d %d",&v,&e);
        int i,j;
        for(i=0;i<v;i++)
        {
            for(j=0;j<v;j++)
                a[i][j]=false;
            visited[i]=false;
        }
        for(i=0;i<e;i++)
        {
            int u,v;
            scanf("%d %d",&u,&v);
            a[u][v]=true;
            a[v][u]=true;
        }
        /**
        for(i=0;i<v;i++)
        {
            for(j=0;j<v;j++)
                printf("%d ",a[i][j]);
            printf("\n");
        }
        **/
        printf("%d\n",dfs(source,v)*2);///dfs comes back to the same node. path passes 2 times

    }
}
