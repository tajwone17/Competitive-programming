#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '@')
                count++;
            if (s[i] == '*' && s[i + 1] == '*')
                break;
        }
        cout << count << endl;
        ;
    }
}