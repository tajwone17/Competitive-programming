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
        int n, k;
        cin >> n >> k;
        if (n == 1)
        {
            cout << 1 << endl;
            cout << 1 << endl;
        }
        else if (k == n || k == 1)
            cout << -1 << endl;
        else if (k % 2 == 0)
        {
            cout << 3 << endl;
            cout << 1 << " " << k << " " << k + 1 << endl;
        }
        else
        {
            if (k - 1 > 1 && k + 1 < n)
            {
                cout << 3 << endl;
                cout << 1 << " " << k - 1 << " " << k + 2 << endl;
            }
            else
                cout << -1 << endl;
        }
    }
}