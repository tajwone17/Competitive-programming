#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, count = 0;
        cin >> a >> b >> c;
        int mx = max(a, b);
        int mn = min(a, b);
        while (mn < mx)
        {
            mn = mn + c;
            mx = mx - c;
            count++;
        }
        cout << count << endl;
    }
}