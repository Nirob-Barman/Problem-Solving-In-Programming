#include <bits/stdc++.h>

int main()
{
    int n;
    scanf("%d ", &n);
    char c;
    while (n--)
    {
        scanf(" %c", &c);
        if (c == 66 || c == 98)
            printf("BattleShip\n");
        else if (c == 67 || c == 99)
            printf("Cruiser\n");
        else if (c == 68 || c == 100)
            printf("Destroyer\n");
        else if (c == 70 || c == 102)
            printf("Frigate\n");
    }
}
