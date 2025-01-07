#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 1e5 + 10;
// int a[N];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;

        int operations = 0;

        int zero_count = 0;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '0')
                zero_count++;
            else
                zero_count = 0;

            if (zero_count == m)
            {
                operations++;
                zero_count = 0;
                i += k - 1;
            }
        }
        //   for (int i = 0; i < n; ++i)
        // {
        //     if (s[i] == '0')
        //         zero_count++;

        //     if (zero_count > (m - 1))
        //     {
        //         operations++;

        //         i = i + k - 1;
        //         zero_count = 0;
        //     }
        //     if (s[i] == '1')
        //         zero_count = 0;
        //     if (i >= n)
        //         break;
        // }
        // if (zero_count > (m - 1))
        // {
        //     operations++;
        // }
        cout << operations << endl;
    }
}