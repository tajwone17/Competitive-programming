#include <bits/stdc++.h>
using namespace std;

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int

int32_t main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(m);

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        sort(b.begin(), b.end());
        bool pos = true;
        int prev = -1e9;

        for (int i = 0; i < n; i++)
        {
            auto it = lower_bound(b.begin(), b.end(), (a[i] + prev));
            int b1 = (it != b.end()) ? *it : -1;
            int opt1 = a[i];
            int opt2 = b1 - a[i];

            if (opt1 >= prev && opt2 >= prev)
            {
                prev = min(opt1, opt2);
            }
            else if (opt1 >= prev)
            {
                prev = opt1;
            }
            else if (opt2 >= prev)
            {
                prev = opt2;
            }
            else
            {

                pos = false;
                break;
            }
        }

        if (pos)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
