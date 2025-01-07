#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i <= n - 2; i++)
        {
            sum = sum + (v[i + 1] - v[i]);
        }
        cout << sum << endl;
    }
}