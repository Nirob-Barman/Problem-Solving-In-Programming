#include <iostream>
#include <queue>
#include <vector>
#include <cstdbool>

#define white 0
#define red 1
#define blue 2

using namespace std;

int main()
{
    int node;
    while (scanf("%d", &node) != EOF)
    {
        if (node == 0)
            break;
        int edge, i, j;
        scanf("%d", &edge);
        vector<int> graph[node];
        for (i = 1; i <= edge; i++)
        {
            int u, v;
            scanf("%d %d", &u, &v);
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        /*
        for(i=0;i<node;i++)
        {
            printf("%d\n",i);
            for(j=0;j<graph[i].size();j++)
                cout<<graph[i][j]<<" ";
            cout<<endl;
        }*/
        int source = 0;
        queue<int> q;
        int color[node] = {white};

        q.push(source);
        color[source] = red;

        bool flag = true;

        while (!q.empty())
        {
            int u = q.front();
            for (i = 0; i < graph[u].size(); i++)
            {
                int v = graph[u][i];

                if (color[v] == white)
                {
                    if (color[u] == red)
                        color[v] = blue;
                    else
                        color[v] = red;
                    q.push(v);
                }
                if (color[u] == color[v])
                {
                    flag = false;
                    break;
                }
            }
            q.pop();
        }
        if (flag)
            printf("BICOLORABLE.\n");
        else
            printf("NOT BICOLORABLE.\n");
    }
}
