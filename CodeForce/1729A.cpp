#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d1, d2;
        cin >> a >> b >> c;

        d1 = abs(a - 1);
        d2 = abs(b - c) + (c - 1);

        if (d1 < d2)
            cout << 1 << endl;
        else if (d1 == d2)
            cout << 3 << endl;
        else
            cout << 2 << endl;
    }
}