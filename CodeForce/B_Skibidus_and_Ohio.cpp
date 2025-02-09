#include <bits/stdc++.h>
using namespace std;

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
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

int32_t main()
{
    faster;
    int t;
    cin >> t;
    // cin.ignore();
    while (t--)
    {
        string s;
        int flag = 0;
        cin >> s;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                flag = 1;
            }
        }
        if (flag)
        {
            cout << 1 << endl;
        }
        else
            cout << s.size() << endl;
    }
}