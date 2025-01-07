#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 1e5 + 10;
int a[N];

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
        int S = 501;
        cin >> n;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a[i];
        }
        cout << S << " ";
        for (int i = 0; i < n - 1; ++i)
        {
            S += a[i];
            cout << S << " ";
        }
        cout << endl;
    }
}