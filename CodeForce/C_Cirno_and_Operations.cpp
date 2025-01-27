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
        int n, sum = 0, tsum = 0;
        cin >> n;
        vector<int> a(n);
        vector<int> t;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sum = accumulate(a.begin(), a.end(), 0);
        while (n > 1)
        {
            for (int i = 0; i < n - 1; i++)
            {
                t.push_back(a[i + 1] - a[i]);
            }
            sum = max(sum, abs(accumulate(t.begin(), t.end(), 0ll)));
            t.clear();
            for (int i = 0; i < n - 1; i++)
            {
                a[i] = t[i];
            }
            n--;
        }
        cout << sum << endl;
    }
}