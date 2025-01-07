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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> p = v;
        sort(v.begin(), v.end());
        if (k >= 2 || p == v)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}