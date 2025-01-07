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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        if (v[0] != v[1] && v[1] == v[2])
        {
            cout << 1 << endl;
        }
        else
        {
            int y = v[0];
            for (int i = 1; i < v.size(); i++)
            {
                if (v[i] != y)
                    cout << i + 1 << endl;
            }
        }
    }
}