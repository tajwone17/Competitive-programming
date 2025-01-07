#include <bits/stdc++.h>
using namespace std;

#define int long long int

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        unordered_set<int> used;
        set<int> available;

        for (int i = 1; i <= n; ++i)
        {
            available.insert(i);
        }

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (used.find(a[i]) == used.end())
            {
                b[i] = a[i];
                used.insert(a[i]);
                available.erase(a[i]);
            }
            else
            {
                auto it = available.begin();
                b[i] = *it;
                used.insert(*it);
                available.erase(it);
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}
