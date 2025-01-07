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
        int n, m, cnt = 0;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            string st;
            cin >> st;
            v[i] = st;
        }
        for (int i = 0; i < n; i++)
        {
            int s = v[i].size();
            if (s <= m)
            {
                cnt++;
                m = m -s ;
            }
            else
                break;
        }

        cout << cnt << endl;
    }
}