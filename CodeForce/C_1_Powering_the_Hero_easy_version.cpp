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
        int n, res = 0;
        cin >> n;
        vector<int> v(n);
        priority_queue<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
            if (v[i] > 0)
            {
                s.push(v[i]);
            }
            else
            {

                if (!s.empty())
                {
                    res += s.top();
                    s.pop();
                }
            }
        cout << res << endl;
    }
}