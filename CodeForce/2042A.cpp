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
        int n, k, sum = 0, ans;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int i = n - 1; i >= 0; i--)
        {
            sum += v[i];
            if (sum > k)
            {
                sum -= v[i];
                ans = k - sum;

                break;
            }
            else if (sum == k)
            {
                ans = 0;
                break;
            }
            if (i == 0 && sum < k)
                ans = k - sum;
        }

        cout << ans << endl;
    }
}