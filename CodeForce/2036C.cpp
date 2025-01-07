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
        string s;
        cin >> s;
        int q, count = 0;
        cin >> q;
        int n = s.size();
        for (int i = 0; i < n - 3; ++i)
        {
            if (i + 3 < n && s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0')
            {
                count++;
                i += 3;
            }
        }
        while (q--)
        {

            int j;
            char k;
            cin >> j >> k;
            int idx = j - 1;
            // s[idx] = k;

            // if (n < 4)
            //     cout << "N0" << endl;

            if (k != s[idx] && k == '0')
            {
                if ((s[idx - 1] == '1' && s[idx - 2] == '1' && s[idx + 1] == '0' && idx > 1 && idx + 1 < n) || (s[idx - 1] == '0' && s[idx - 2] == '1' && s[idx - 3] == '1' && idx > 2))

                    count++;
            }
            else if (k != s[idx] && k == '1')
            {
                if ((s[idx - 1] == '1' && s[idx + 1] == '0' && s[idx + 2] == '0' && idx > 0 && idx + 2 < n) || (s[idx + 1] == '1' && s[idx + 2] == '0' && s[idx + 3] == '0' && idx + 3 < n))

                    count++;
            }

            if (k != s[idx] && k == '1')
            {
                if ((s[idx - 1] == '1' && s[idx - 2] == '1' && s[idx + 1] == '0' && idx > 1 && idx + 1 < n) || (s[idx - 1] == '0' && s[idx - 2] == '1' && s[idx - 3] == '1' && idx > 2))

                    count--;
            }
            else if (k != s[idx] && k == '0')
            {
                if ((s[idx - 1] == '1' && s[idx + 1] == '0' && s[idx + 2] == '0' && idx > 0 && idx + 2 < n) || (s[idx + 1] == '1' && s[idx + 2] == '0' && s[idx + 3] == '0' && idx + 3 < n))

                    count--;
            }

            s[idx] = k;

            if (count <= 0)
            {
                cout << "NO" << endl;
                count = 0;
            }
            else
                cout << "YES" << endl;
        }
    }
}