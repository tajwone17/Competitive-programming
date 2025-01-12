#include <bits/stdc++.h>
using namespace std;
#define int long long int
// const int N = 1e5 + 10;
// const int MAX = 200'007;
// int a[MAX];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    // cin.ignore();
    while (t--)
    {
        int n, counts = 0, sum = 0, flag = 0;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {

            if (a[i] < b[i])
            {
                counts++;

                sum += b[i] - a[i];
            }
        }
        if (counts > 1)
        {
            cout << "NO" << endl;
        }

        else if (counts == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] >= b[i] && sum > a[i] - b[i])
                {
                    cout << "NO" << endl;
                    flag = 1;
                    break;
                }
            }
            if (!flag)
                cout << "YES" << endl;
        }
        else
            cout << "YES" << endl;
    }
}