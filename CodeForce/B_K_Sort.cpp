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
        int n, sum = 0;
        cin >> n;
        vector<int> a(n);
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                int x = a[i] - a[i + 1];
                ans.push_back(x);
                a[i + 1] = a[i];
            }
        }
        int mx = 0;

        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] > mx)
            {
                mx = ans[i];
            }
            sum += ans[i];
        }
        sum += mx;
        cout << sum << endl;
    }
}