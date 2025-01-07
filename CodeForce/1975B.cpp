#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 1e5+10;
int a[N];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        vector<int> v(n);
        vector<int> t;
        vector<int> t1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int z, k;
        for (int i = 1; i < n; i++)
        {
            if (v[i] != v[0])
            {
                z = v[i];
                k = i;
                break;
            }
        }
        for (int i = 1; i < n; i++)
        {

            if (v[i] % v[0] == 0)
                count++;
            else
            {
                int x = v[i];
                t.push_back(x);
            }
        }
        sort(t.begin(), t.end());
        for (int i = 1; i < t.size(); i++)
        {
            if (t[i] % t[0] != 0)
                t1.push_back(t[i]);
        }
        if (t.size() == 0 || t1.size() == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}