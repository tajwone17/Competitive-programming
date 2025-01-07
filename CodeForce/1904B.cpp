#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 1e5 + 10;
// int a[N];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> p(n);

        for (int i = 0; i < n; ++i)
        {

            cin >> p[i].first;

            p[i].second = i;
        }
        sort(p.begin(), p.end());
        int arr[n];
        arr[0] = p[0].first;
        for (int i = 1; i < n - 1; i++)
        {
            arr[i] = arr[i - 1] + p[i].first;
        }
        vector<int> ans(n, 0);
        ans[p[n - 1].second] = n - 1;
        for (int i = n - 2; i >= 0; i--)
        {

            if (arr[i] >= p[i + 1].first)
                ans[p[i].second] = ans[p[i + 1].second];
            else

                ans[p[i].second] = i;
        }

        for (int i = 0; i < n; ++i)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}