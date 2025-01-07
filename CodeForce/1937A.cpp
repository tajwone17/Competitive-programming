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
        int r = (log2(n) / log2(2));
        int result = pow(2, r);
        cout << result << endl;
    }
}