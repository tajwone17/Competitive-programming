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
        int n, x, y, sum = 0, ans = 0;
        cin >> n >> x >> y;
        vector<int> v(n);
   
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
             sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            int l = i + 1, r = n - 1, left = -1, right = -1;
            while (l <= r)
            {
                int mid = (l + r) >> 1;
                int ok = sum - (v[i] + v[mid]);
                if (ok >= x && ok <= y)
                {
                    left = mid;
                    r = mid - 1;
                }
                else if (ok < x)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            l = i + 1, r = n - 1;
            while (l <= r)
            {
                int mid = (l + r) + 1 >> 1;
                int ok = sum - (v[i] + v[mid]);
                if (ok >= x && ok <= y)
                {
                    right = mid;
                    l = mid + 1;
                }
                else if (ok < x)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if (left != -1 && right != -1)
                ans += right - left + 1;
        }
        cout << ans << endl;
    }
    return 0;
}