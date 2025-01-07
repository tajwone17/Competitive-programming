#include <bits/stdc++.h>
using namespace std;
#define int long long int

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int m, a, b, c, o = 0, tw = 0, tr = 0;
        cin >> m >> a >> b >> c;
        int total = 2 * m;
        o = min(m, a);

        tw = min(m, b);

        total -= (o + tw);

        tr = min(total, c);

        cout << o + tw + tr << endl;
    }
}
