#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    int i = 0;
    while (t--)
    {
        i++;
        int curday, curmon, curyear;
        int preday, premon, preyear;
        scanf("%d/%d/%d", &curday, &curmon, &curyear);
        scanf("%d/%d/%d", &preday, &premon, &preyear);
        int age = curyear - preyear;

        if (premon > curmon || (premon == curmon && curday < preday))
            age -= 1;
        if (age < 0)
            printf("Case #%d: Invalid birth date\n", i);
        else if (age > 130)
            printf("Case #%d: Check birth date\n", i);
        else
            printf("Case #%d: %d\n", i, age);
    }
}
