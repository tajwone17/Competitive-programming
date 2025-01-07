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
        int n, k;
        cin >> n >> k;
        int l = 1, r = n;
        int i = 1;
        while (l <= r)
        {
            if (i % k == 0)
            {
                cout << l << " ";
                l++;
            }
            else
            {
                cout << r << " ";
                r--;
            }
            i++;
        }
        cout << endl;
    }
}