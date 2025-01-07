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
        int x, ans = 0;
        cin >> x;
        int i = 1;
        if (x < 4)
            cout << 1 << endl;

        else
        {
            while (x > 3)
            {
                x = x / 4;
                ans += i;
                i *= 2;
            }
            cout << ans + 1 << endl;
        }
    }
}