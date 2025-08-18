#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int MOD = 1e9 + 7;

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
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
        {
            a[i] = i + 1;
        }

        int j = 1;
        for (int i = n / 2; i < n; i++)
        {
            b[i] = j++;
        }
        for (int i = 0; i < n / 2; i++)
        {
            b[i] = j++;
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}