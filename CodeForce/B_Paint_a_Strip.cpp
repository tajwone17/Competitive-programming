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
        int n, sum = 1, cnt = 1;
        cin >> n;
        if (n == 2)
            cout << 2 << endl;
        else
        {
            while (sum < n)
            {
                sum = (sum + 1) * 2;
                cnt++;
            }
            cout << cnt << endl;
        }
    }
}