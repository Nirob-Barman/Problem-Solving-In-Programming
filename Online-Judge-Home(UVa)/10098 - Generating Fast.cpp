#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        /// cout<<s<<endl;
        do
        {
            cout << s << endl;
        } while (next_permutation(s.begin(), s.end()));
        cout << endl;
    }
}
