#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int maxLength = 0, currentLength = 1;

    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] != s[i - 1])
        {
            maxLength = max(maxLength, currentLength);
            currentLength = 0;
        }
        currentLength++;
    }
    maxLength = max(maxLength, currentLength);
    cout << maxLength << endl;
}
