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
        int n, f = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] != i + 1)
            {
                if (v[i + 1] == i + 1 && v[i] == i + 2)
                {
                    swap(v[i], v[i + 1]);
                }
                else
                {
                    f = 1;
                    break;
                }
            }
        }
        if (!f)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}