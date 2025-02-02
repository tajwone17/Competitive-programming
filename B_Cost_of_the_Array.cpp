
#include <bits/stdc++.h>
using namespace std;
#define int long long int
// const int N = 1e5 + 10;
// const int MAX = 200'007;
// int a[MAX];

// const int M=998244353;
// // long long mod(long long x){
// //     return ((x%M + M)%M);
// // }
// // long long add(long long a, long long b){
// //     return mod(mod(a)+mod(b));
// // }
// long long mul(long long a, long long b){
//     return mod(mod(a)*mod(b));
// }

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
        bool found = false;
        cin >> n >> k;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        if (n == k)
        {
            int y = 1, f = 0;
            for (int i = 1; i < n; i += 2)
            {
                if (v[i] != y)
                {
                    cout << y << endl;
                    f = 1;
                    break;
                }
                y++;
            }
            if (!f)
                cout << y << endl;
        }
        else
        {
            int nd = n - k + 2;
            for (int i = 1; i < nd; i++)
            {
                if (v[i] != 1)
                {
                    cout << 1 << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << 2 << endl;
        }
    }
}