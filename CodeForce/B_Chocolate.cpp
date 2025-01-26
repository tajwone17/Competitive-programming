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

    // cin.ignore();
    int n, ans = 1, nuts = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            nuts++;
    }
    if (nuts == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                if (!s.empty())
                {
                    int d = i - s.top();
                    s.pop();
                    ans *= d;
                }

                s.push(i);
            }
        }
        cout << ans << endl;
    }
}
