#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k, cnt = 0;
    cin >> n >> k;
    int target = k - 1;
    vector<pair<int, int>> tms(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        tms[i] = {x, y};
    }

    sort(tms.begin(), tms.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         {
        if (a.first != b.first)
            return a.first > b.first; 
        return a.second < b.second; });
    int x = tms[target].first;
    int y = tms[target].second;
    for (int i = 0; i < n; i++)
    {
        if (tms[i].first == x && tms[i].second == y)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
