#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, reverseNumber = 0, r;
        cin >> n;
        for (; n > 0; n = n / 10)
        {
            r = n % 10;
            reverseNumber = reverseNumber * 10 + r;
        }

        cout << reverseNumber << endl;
    }
    return 0;
}
