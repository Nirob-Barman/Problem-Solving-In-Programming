#include <bits/stdc++.h>

int main()
{
    int t, k, i, j, l;
    char team[21], judge[21], teamedit[21];
    scanf("%d\n", &t);
    for (k = 1; k <= t; k++)
    {
        gets(team);
        gets(judge);
        if (strcmp(team, judge) == 0)
            printf("Case %d: Yes\n", k);
        else
        {
            j = 0;
            l = strlen(team);
            for (i = 0; i < l; i++)
            {
                if (team[i] != ' ')
                {
                    teamedit[j] = team[i];
                    j++;
                }
                teamedit[j] = '\0';
            }
            if (strcmp(teamedit, judge) == 0)
                printf("Case %d: Output Format Error\n", k);
            else
                printf("Case %d: Wrong Answer\n", k);
        }
    }
}
