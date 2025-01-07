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
        vector<int> ans;
        if (n % 10 != 0)
        {
            ans.push_back(n % 10);
        }
        n = n - (n % 10);
        if (n % 100 != 0)
        {
            ans.push_back(n % 100);
        }
        n = n - (n % 100);
        if (n % 1000 != 0)
        {
            ans.push_back(n % 1000);
        }
        n = n - (n % 1000);
        if (n % 10000 != 0)
        {
            ans.push_back(n % 10000);
        }
        if (n == 10000)
            ans.push_back(10000);
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}