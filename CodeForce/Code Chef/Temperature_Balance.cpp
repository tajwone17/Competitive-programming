#include <bits/stdc++.h>
using namespace std;
#define int long long int

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

        int n, ans = 0, count = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (i < n - 1)
                v[i + 1] += v[i];

            count += abs(v[i]);
        }

        cout << count << endl;
    }
}