#include <bits/stdc++.h>
using namespace std;

#define int long long
#define freePalestine                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, vector<int>> pos;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        pos[a[i]].push_back(i);
    }

    vector<int> ans(n);

    for (const auto &p : pos)
    {
        const int val = p.first;
        const vector<int> &v = p.second;
        if (v.size() == 1)
        {
            cout << -1 << '\n';
            return;
        }

        int sz = v.size();
        for (int i = 0; i < sz; ++i)
        {
            ans[v[i]] = v[(i + 1) % sz];
        }
    }

    for (auto x : ans)
        cout << x + 1 << ' ';
    cout << '\n';
}

main()
{
    freePalestine;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
