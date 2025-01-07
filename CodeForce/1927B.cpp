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
        vector<int> vec(n);

        map<char, int> mp;
        for (int i = 97; i <= 122; i++)
        {

            mp[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];

            for (auto it : mp)
            {
                if (it.second == vec[i])
                {
                    cout << it.first;
                    mp[it.first]++;
                    break;
                }
            }
        }

        cout << "\n";
    }
}