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
        int n, a, b;
        cin >> n >> a >> b;
        int j = abs(a - b);
        if (j % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}