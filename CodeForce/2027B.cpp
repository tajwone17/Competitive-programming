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
        vector<int> v;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int min1 = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (v[i] < v[j])
                    cnt++;
            }
            min1 = min(i + cnt, min1);
        }
        cout << min1 << endl;
    }
}