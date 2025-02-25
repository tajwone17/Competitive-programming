#include <bits/stdc++.h>
using namespace std;

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int
#define all(n) for (int i = 0; i < (n); i++)
#define sort(v) sort((v).begin(), (v).end())
#define rsort(v) sort((v).rbegin(), (v).rend())
#define endl "\n"
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
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
void solve()
{
    int count = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size() - 2; i++)
    {
        if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c' || s[i] == 'b' && s[i + 1] == 'a' && s[i + 2] == 'c' || s[i] == 'c' && s[i + 1] == 'b' && s[i + 2] == 'a' || s[i] == 'c' && s[i + 1] == 'a' && s[i + 2] == 'b' || s[i] == 'b' && s[i + 1] == 'c' && s[i + 2] == 'a' || s[i] == 'a' && s[i + 1] == 'c' && s[i + 2] == 'b')
        {
            count += 3;
        }
    }
    cout << count << endl;
}

main()
{
    faster;
    // cout<<"Case #"<<i<<": ";
    solve();
}