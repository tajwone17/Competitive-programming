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
        int n, flag = 0;
        cin >> n;
        vector<int> v1(n);
        vector<int> v2(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> v2[i];
        }
        if (v1 == v2)
        {
            cout << "Bob" << endl;
            flag = 1;
        }

        reverse(v1.begin(), v1.end());
        if (!flag)
        {
            if (v1 == v2)
            {
                cout << "Bob" << endl;
            }
            else
                cout << "Alice" << endl;
        }
    }
}