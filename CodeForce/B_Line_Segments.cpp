#include <bits/stdc++.h>
using namespace std;

#define freePalestine             \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define endl "\n"
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define technologia return 0

void tajwone17()
{
    int n, px, py, qx, qy;
    cin >> n >> px >> py >> qx >> qy;

    vector<int> a(n);
    int sum = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        mx = max(mx, a[i]);
    }

    int dx = px - qx;
    int dy = py - qy;
    int D_sq = dx * dx + dy * dy;

    int R_max = sum;
    int R_min;

    if (n == 0)
        R_min = 0;
    else
    {
        int rest = sum - mx;
        R_min = max(0LL, mx - rest);
    }

    int R_min_sq = R_min * R_min;
    int R_max_sq = R_max * R_max;

    if (D_sq >= R_min_sq && D_sq <= R_max_sq)
        yes;
    else
        no;
}

int32_t main()
{
    freePalestine;
    int t;
    cin >> t;
    while (t--)
    {
        tajwone17();
    }
    technologia;
}
