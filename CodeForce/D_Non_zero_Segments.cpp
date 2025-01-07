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
    // int t;
    // cin >> t;
    // while (t--)
    // {
    int n, cnt = 0;
    cin >> n;
    vector<int> v(n);
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ans[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] + v[i];
        if (ans[i] == 0)
        {
            cnt++;
            ans[i] = v[i];
        }
    }
    cout << cnt << endl;
}
