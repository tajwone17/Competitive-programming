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
    int n, m, mn, mx;
    cin >> n >> m;
    if (m == 1)
    {
        mn = mx = (n * (n - 1)) / 2;
    }
    else
    {
        int k = n - m + 1;
        mx = k * (k - 1) / 2;
        int i = n / m;
        int j = n % m;

        int ans2 = (m - j);
        int ans1 = (j * ((i + 1) * (i))) / 2;
        ans2 = (ans2 * (i * (i - 1))) / 2;
        mn = ans1 + ans2;
    }
    cout << mn << " " << mx << endl;
}