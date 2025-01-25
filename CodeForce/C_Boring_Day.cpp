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
        int n, l, r, ans = 0, sum = 0;
        cin >> n >> l >> r;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int j = 0;

        int left = 0, right = 0;
        for (right = 0; right < n; right++)
        {
            if (a[right] > r)
            {
                sum = 0;
                left = right + 1;
                continue;
            }
            sum += a[right];
            while (sum > r)
            {
                sum -= a[left];
                left++;
            }
            if (sum >= l && sum <= r)
            {
                ans++;
                left = right + 1;
                sum = 0;
            }
        }
        cout << ans << endl;
    }
}