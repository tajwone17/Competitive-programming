
#include <bits/stdc++.h>
using namespace std;
#define int long long int

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int j = k / 2;
        vector<int> a(n);
        vector<int> b(m);
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= k)
            {
                int x = a[i];
                v1.push_back(x);
            }
        }
        for (int i = 0; i < m; i++)
        {

            if (b[i] <= k)
            {
                int x = b[i];
                v1.push_back(x);
            }
        }
        
    }
}