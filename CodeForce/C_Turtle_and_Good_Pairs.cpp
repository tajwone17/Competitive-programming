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
    // cin.ignore();
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        map<char, int> mp;
        vector<pair<int, char>> v;
        string ans = "";
        string temp = "";
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        for (auto i : mp)
        {
            v.push_back({i.second, i.first});
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        for (auto it : v)
        {
            temp.push_back(it.second);
        }

        int i = v.size() - 1;
        while (i >= 0)
        {
            int req = v[i].first - sum;

            for (int i = 0; i < req; ++i)
            {
                ans += temp;
            }
            sum += req;
            temp.pop_back();
            --i;
        }
        cout << ans << endl;
    }
}