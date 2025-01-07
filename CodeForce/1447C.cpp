#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int MOD = 1e9 + 7;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {

        int n, w, idx;
        cin >> n >> w;
        int k = (w + 1) / 2;
        int sum = 0;
        bool found = false;
        vector<pair<int, int>> v(n);
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i + 1;
        }

        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if (v[i].first >= k && v[i].first <= w)
            {
                found = true;
                idx = v[i].second;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            sum += v[i].first;
            if (sum <= w)
            {
                int t = v[i].second;
                ans.push_back(t);
            }
            else
            {
                sum = sum - v[i].first;
                break;
            }
        }
        if (found)
        {
            cout << 1 << endl;
            cout << idx << endl;
        }
        else if (sum >= k && sum <= w)
        {
            cout << ans.size() << endl;
            sort(ans.begin(), ans.end());
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
}