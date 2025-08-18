#include <bits/stdc++.h>
using namespace std;

#define freePalestine             \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int
#define endl "\n"
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define technologia return 0

void tajwone17()
{
    int n, c;
    cin >> n >> c;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int ans = 0;
    int dbl = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > c)
        {
            ans += (n - 1 - i);

            n = i + 1;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        a[i] = a[i] * dbl;
        if (a[i] > c)
        {
            ans++;
        }
        else
            dbl *= 2;
    }
    cout << ans << endl;
}
int32_t main()
{
    freePalestine;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        tajwone17();
    }
    technologia;
}
