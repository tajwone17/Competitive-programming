#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 1e5 + 10;
// int a[N];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, r = 0, flag = 0;

        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        r = sum / n;
        if (sum % n != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            for (int i = 1; i < n - 1; i++)
            {

                if (v[i - 1] > r)
                {
                    v[i + 1] += (v[i - 1] - r);
                    v[i - 1] = r;
                }
                else if (v[i - 1] < r)
                {
                    v[i + 1] -= (r-v[i - 1]);
                    v[i - 1] = r;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (r != v[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}