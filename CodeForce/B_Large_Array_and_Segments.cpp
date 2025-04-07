#include <bits/stdc++.h>
using namespace std;

#define freePalestine             \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int

void solve()
{
    int n, k, x, sum = 0, cnt = 0;
    cin >> n >> k >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int tsum = 0;
    if (sum * k < x)
    {
        cout << 0 << endl;
        return;
    }
    if (x <= sum)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            tsum += a[i];
            if (tsum >= x)
            {
                break;
            }
            cnt++;
        }
        cout << (n * k) - cnt << endl;
        return;
    }
    int c = x / sum;
    int suf = c * sum;
    if (x % sum == 0)
    {
        c--;
        suf = c * sum;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        suf += a[i];
        if (suf >= x)
        {
            break;
        }
        cnt++;
    }

    cout << ((n * k) - ((c * n) + cnt)) << endl;
}

int32_t main()
{
    freePalestine;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
