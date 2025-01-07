#include <bits/stdc++.h>
using namespace std;
#define int long long int

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        string s;
        cin >> s;

        int max = s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i] > max)
            {
                max = s[i];
            }
        }
        cout << max - 96 << endl;
    }
}
