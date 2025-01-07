#include <bits/stdc++.h>
using namespace std;
#define int long long int
// const int N = 1e5 + 10;
// const int MAX = 200'007;
// int a[MAX];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> ans(n, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        string s;
        cin >> s;
        vector<pair<int, int>> p;
        for (int i = 1; i <= n; i++)
        {
            p[i] = {(v[i], s[i])};
        }
        for (int i = 1; i <= n; ++i)
        {
            int il = p[i].first;
            while()
            if (p[i].second == 0)
            {
                ans[i]++;
            }
        }
    }
}