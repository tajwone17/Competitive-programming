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
        int n, sameFlag1 = 0, sameFlag2 = 0;
        cin >> n;
        vector<int> v1(n);
        vector<int> v2(n);
        set<int> s1;
        set<int> s2;
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
            s1.insert(v1[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
            s2.insert(v2[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (v1[i] != v1[i + 1])
            {
                sameFlag1 = 1;
                break;
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (v2[i] != v2[i + 1])
            {
                sameFlag2 = 1;
                break;
            }
        }

        if (sameFlag1 == 0 && sameFlag2 == 0)
            cout << "NO" << endl;
        else if (sameFlag1 == 0 && s2.size() < 3)
            cout << "NO" << endl;
        else if (sameFlag2 == 0 && s1.size() < 3)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}