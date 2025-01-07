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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int ans = k;
        int psum = 0;
        for (int i = 0; i < n; i++)
        {
            int m = n - i ;
            if ((m * v[i] + psum) >= k)
            {
                ans += i;
                break;
            }

            psum += v[i];
        }
        cout << ans << endl;
    }
}