#include <bits/stdc++.h>
using namespace std;
#define int long long int

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(m);
        vector<int> b(k);
        string s = "";
        map<int, int> mp;

        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < k; i++)
        {
            cin >> b[i];
            mp[b[i]]++;
        }
        if (k == n)
            s = string(m, '1');
        else if (k == n - 1)
        {

            for (int i = 0; i < m; i++)
            {
                if (mp[a[i]])
                {
                    s += '0';
                }
                else
                    s += '1';
            }
        }
        else
        {
            s = string(m, '0');
        }
        cout << s << endl;
    }
}