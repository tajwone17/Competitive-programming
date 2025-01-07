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
        int k, j = 0, flag = 0;
        cin >> k;
        int n = k - 2;
        vector<int> v(k);
        vector<pair<int, int>> d;
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
            if (n % v[i] == 0)
            {
                d[j].first = v[i];
                d[j].second = n / v[i];
                j++;
            }
        }
        // sort(v.begin(), v.end());

        for (int i = 0; i < k; i++)
        {
            if (v[i] == d[i].second)
            {
                cout << v[i] << " " << d[i].second;
                break;
            }
        }
    }
}