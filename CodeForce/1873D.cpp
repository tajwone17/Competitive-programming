#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, count = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                count++;
                i = i + k - 1;
            }
        }
        cout << count << endl;
    }
}