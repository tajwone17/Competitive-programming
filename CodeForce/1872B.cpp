#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d, s, ans = 1e9;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> d >> s;
            ans = min(ans, d + (s - 1) / 2);
        }
        cout << ans << endl;
    }
}