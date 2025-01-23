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
        int n, flag = 0;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        s += s;
        int idx;
        int ans = 0;
        int mtp = 0;

        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == c && flag == 0)
            {
                flag = 1;
                idx = i;
            }
            if (s[i] == 'g' && flag == 1)
            {
                ans = max(ans, i - idx);
                flag = 0;
            }
        }
        cout << ans << endl;
    }
}