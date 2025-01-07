#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int max = (4 * n) - 2;
        if (k == max)
            cout << n * 2 << endl;
        else if (k == (max - 1))
            cout << (n * 2) - 1 << endl;
        else
            cout << (k + 1) / 2 << endl;
    }
}