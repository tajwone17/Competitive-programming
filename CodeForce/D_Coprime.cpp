#include <bits/stdc++.h>
using namespace std;

#define freePalestine             \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int
#define endl "\n"

void tajwone17(map<pair<int, int>, int> &mp)
{
    int n;
    cin >> n;
    map<int, int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x] = max(a[x], i + 1);
    }

    int ans = -1;

    for (auto i : a)
    {
        for (auto j : a)
        {
            if (mp[{i.first, j.first}] == 1)
            {
                ans = max(ans, i.second + j.second);
            }
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    freePalestine;
    int t;
    cin >> t;

    map<pair<int, int>, int> mp;
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (__gcd(i, j) == 1)
            {
                mp[{i, j}] = 1;
            }
        }
    }

    while (t--)
    {
        tajwone17(mp);
    }
}