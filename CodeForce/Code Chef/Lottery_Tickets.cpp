#include <bits/stdc++.h>
using namespace std;
#define int long long int

// const int MAX = 200'007;
// int a[MAX];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    // cin.ignore();
    while (t--)
    {
        int N = 1e6;
        int n, mn = 0, ans = 1;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int m = v[0];
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if (v[i] == m)
            {
                if (i > 0)
                    mn = v[i - 1];
                if (i < n - 1)
                    N = v[i + 1];
                break;
            }
        }
        if (N == 1e6)
            ans = (((N - m)) + ((m - mn) / 2)) + 1;
        else if (mn == 0)
            ans = (((N - m) / 2) + ((m - mn)));
        else
            ans = (((N - m) / 2) + ((m - mn) / 2)) + 1;
        cout << ans << endl;
    }
}