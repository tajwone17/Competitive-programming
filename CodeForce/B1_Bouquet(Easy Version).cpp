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
        int n, m, res = 0;
        cin >> n >> m;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int sum = 0;
        int start = 0;

        for (int i = 0; i < n; i++)
        {

            sum += v[i];
            while (sum > m || (v[i] - v[start]) > 1 && start < n)
            {
                sum -= v[start];
                start++;
            }

            res = max(res, sum);
        }
        cout << res << endl;
    }
}