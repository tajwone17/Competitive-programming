#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int d = n / 9;
        int m = n % 9;
        int r = (m * (m + 1) / 2);
        if (n >= 1 && n < 10)
            cout << (n * (n + 1) / 2) << endl;
        else
            cout << ((d * 45) + r) << endl;
    }
}