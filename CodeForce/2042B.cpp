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
        int n, score = 0, cnt = 0;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        for (const auto &pair : mp)
        {
            if (mp[pair.first] == 1)
                cnt++;
        }
        if (cnt % 2 == 0)
        {
            score = score + ((cnt / 2) * 2);
        }
        else
            score = score + (((cnt / 2) + 1) * 2);
        for (const auto &pair : mp)
        {

            if (mp[pair.first] != 1)
                score++;
                }
        cout << score << endl;
    }
}