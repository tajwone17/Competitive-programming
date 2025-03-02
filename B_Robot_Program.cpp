#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int

void solve()
{
    int n, x, k, found0 = 0, foundAgain = 0, cnt = 0, index1 = 0;
    cin >> n >> x >> k;
    string s;
    cin >> s;

    int ans = 0;
    int z = min(s.size(), static_cast<size_t>(k));
    for (int i = 0; i < z; i++)
    {

        if (s[i] == 'L')
            x--;
        else
            x++;

        if (x == 0)
        {
            found0 = 1;
            index1 = i + 1;
            break;
        }
    }
    x = 0;
    for (int i = 0; i < z; i++)
    {

        if (s[i] == 'L')
            x--;
        else
            x++;
        cnt++;
        if (x == 0)
        {
            foundAgain = 1;
            break;
        }
    }
    ans = ((k - index1) / cnt) + 1;
    if (!found0)
        cout << 0 << endl;
    else if (foundAgain == 0)
        cout << 1 << endl;
    else
    {
        cout << ans << endl;
    }
}
int32_t main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
