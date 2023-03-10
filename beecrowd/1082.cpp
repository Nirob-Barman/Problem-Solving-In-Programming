#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

string alphabet=" abcdefghijklmnopqrstuvwxyz";

int graph[27][27];
int visited[27];

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int node,edge;
        scanf("%d %d",&node,&edge);
        for(int i=1;i<=node;i++)
        {
            for(int j=1;j<=node;j++)
                graph[i][j]=0;
            visited[i]=0;
        }
        while(edge--)
        {
            char from,to;
            scanf("%c %c",&from,&to);
            printf("%d\n",static_cast<int>(alphabet.find_first_of(from)));
            printf("%d\n",static_cast<int>(alphabet.find_first_of(to)));
            //int u=static_cast<int>(alphabet.find_first_of(from));
            //int v=static_cast<int>(alphabet.find_first_of(to));
            //printf("%d %d\n",u,v);
        }
    }
}
