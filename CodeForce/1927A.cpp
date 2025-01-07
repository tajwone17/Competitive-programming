#include <bits/stdc++.h>
using namespace std;
#define int long long int

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                k = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
                m = i;
        }
        cout << (m - k) + 1 << endl;
    }
}