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
        int n, ans = 0;
        cin >> n;
        int left = 1;
        int right = 2e18;
        while (left <= right)
        {

            int mid = (left + right) / 2;
            if (mid - (int)sqrt(mid) < n)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
                ans = mid;
            }
        }
        cout << ans << endl;
    }
}