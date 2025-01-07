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
        vector<int> a(n);
        vector<int> b(n);
        int ans = 0, sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > b[i + 1])
            {
                sum1 += a[i];
                sum2 += b[i + 1];
            }
        }
        sum1 += a[n - 1];
        ans = sum1 - sum2;
        cout << ans << endl;
    }
}