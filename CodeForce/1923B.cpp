#include <bits/stdc++.h>
using namespace std;
#define int long long int

main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int k, sum = 0;
        int n;
        cin >> n >> k;
        vector<int> health(n), position(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> health[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            position[abs(x)] += health[i];
        }
        int bullet = k, flag = 0;
        for (int i = 1; i <= n; i++)
        {
            bullet -= position[i];
            if (bullet < 0)
                flag = 1;
            bullet += k;
        }
        if (flag == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}