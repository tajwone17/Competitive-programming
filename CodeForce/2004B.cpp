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
        vector<pair<int, int>> d(2);
        for (int i = 0; i < 2; ++i)
        {
            cin >> d[i].first >> d[i].second;
        }
        sort(d.begin(), d.end());
        int j = min(d[0].second, d[1].second);
        int z = max(d[0].first, d[1].first);
        if (d[0].second < d[1].first)
            cout << 1 << endl;

        else if (d[0].first == d[1].first && d[1].second == d[0].second)
            cout << d[0].second - d[0].first << endl;
        else if ((j == d[0].second && j == d[1].second) || (z == d[0].first && z == d[1].first))
            cout << abs(j - z) + 1 << endl;
        else
            cout << abs(j - z) + 2 << endl;
    }
}