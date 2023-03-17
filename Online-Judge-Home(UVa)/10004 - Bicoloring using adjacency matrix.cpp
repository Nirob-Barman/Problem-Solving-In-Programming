#include <iostream>
#include <queue>
#include <cstdbool>

#define infinity INT_MAX /// 1<<30 or 2^20
#define pb(x) push_back(x)

#define white 0
#define red 1
#define blue 2

using namespace std;

int main()
{
    int node;
    while (scanf("%d", &node) && node != 0)
    {
        int edge;
        scanf("%d", &edge);
        int g[node][node] = {0};
        int i, j;
        for (i = 0; i < edge; i++)
        {
            int u, v;
            scanf("%d %d", &u, &v);
            g[u][v] = g[v][u] = 1;
        }
        /**
        for(i=0;i<node;i++)
        {
            for(j=0;j<node;j++)
                printf("%d ",g[i][j]);
            printf("\n");
        }
        **/

        int color[node] = {white};
        int source = 0;
        queue<int> q;
        q.push(source);
        color[source] = red;

        bool flag = true;

        while (!q.empty())
        {
            int u = q.front();
            for (i = 0; i < node; i++)
            {
                int v = g[u][i];
                if (v == 1)
                {
                    /// I is adjacent node of U
                    if (color[i] == white)
                    {
                        if (color[u] == red)
                            color[i] = blue;
                        else
                            color[i] = red;
                        q.push(i);
                    }
                    if (color[u] == color[i])
                    {
                        flag = false;
                        break;
                    }
                }
            }
            q.pop();
        }
        if (flag)
            printf("BICOLORABLE.\n");
        else
            printf("NOT BICOLORABLE\n");
    }
}
