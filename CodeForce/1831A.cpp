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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int max = *max_element(a.begin(), a.end()) + 1;
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[i] = max - a[i];
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}