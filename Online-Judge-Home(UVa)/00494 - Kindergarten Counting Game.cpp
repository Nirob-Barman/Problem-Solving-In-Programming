#include <bits/stdc++.h>

int main()
{
    int wordCount;
    char c;
    while (scanf("%c", &c) != EOF)
    {
        wordCount = 0;
        while (1)
        {
            if (c == '\n')
                break;
            else if (isalpha(c))
            {
                while (isalpha(c))
                    scanf("%c", &c);
                wordCount++;
            }
            else
                scanf("%c", &c);
        }
        printf("%d\n", wordCount);
    }
}
