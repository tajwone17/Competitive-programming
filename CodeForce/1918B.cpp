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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            mp[v[i]] = b;
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < v.size(); i++)
        {
            cout << mp[v[i]] << " ";
        }
        cout << endl;
    }
}