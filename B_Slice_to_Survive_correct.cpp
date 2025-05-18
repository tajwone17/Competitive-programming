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

void tajwone17()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    // Initial max distances from monster to edges in both dimensions
    int r_max = max(a - 1, n - a);
    int c_max = max(b - 1, m - b);

    // Count cuts needed to reduce r_max to 0
    int row_slices = 0;
    while (r_max > 0)
    {
        r_max >>= 1; // divide by 2
        row_slices++;
    }

    // Count cuts needed to reduce c_max to 0
    int col_slices = 0;
    while (c_max > 0)
    {
        c_max >>= 1; // divide by 2
        col_slices++;
    }

    // Total cuts is the sum
    int total_slices = row_slices + col_slices;
    cout << total_slices << endl;
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
}
