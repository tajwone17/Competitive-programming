#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, flag = 0;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            sum = sum + v[i];
        }

        for (int i = 0; i < n; i++)
        {
            int y = sum - v[i];
            if (y % 3 == 0)
            {
                flag = 1;
                break;
            }
        }
        if (sum % 3 == 0)
            cout << 0 << endl;
        else if (flag == 1 || sum % 3 == 2)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
}