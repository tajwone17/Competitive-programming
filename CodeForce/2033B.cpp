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
        int n, sum = 0;
        cin >> n;
        vector<int> v(n + n);
        for (int i = 0; i < n + n; i++)
        {
            v[i] = 0;
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                int x;
                cin >> x;
                v[n + i - j] = min(v[n + i - j], x);
            }
        }
        for (int i = 0; i < n + n; i++)
        {
            sum += abs(v[i]);
        }
        cout << sum << endl;
    }
}