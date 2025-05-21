#include <bits/stdc++.h>
using namespace std;

#define freePalestine             \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int
#define endl "\n"
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
// const int N = 1e5 + 10;
// const int MAX = 200'007;
// int a[MAX];

// const int M=998244353;
// int mod(long long x){A
//     return ((x%M + M)%M);
// }
// int add(long long a, long long b){
//     return mod(mod(a)+mod(b));
// }
// int mul(long long a, long long b){
//     return mod(mod(a)*mod(b));
// }
// int mod_pow(int base, int exp) {
//     int res = 1;
//     while (exp > 0) {
//         if (exp & 1)
//             res = (res * base) % M;
//         base = (base * base) % M;
//         exp >>= 1;
//     }
//     return res;
// }
void tajwone17()
{
    string s;
    cin >> s;
    int cnt = 0;
    int tmp = 0;
    for (int i = 0; i < s.size(); i++)
    {
        tmp = 0;
        if (s[i] == '1')
        {
            while (i < s.size() && s[i] == '1')
            {
                tmp++;
                i++;
            }
            cnt = max(cnt, tmp);
        }
    }
    tmp = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            break;
        else
            tmp++;
    }
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '0')
            break;
        else
            tmp++;
    }
    int n = s.size();
    tmp = min(tmp, n);
    cnt = max(cnt, tmp);
    if (cnt == s.size())
    {
        cout << cnt * cnt << endl;
        return;
    }
    int z = (cnt + 1);

    int ans = (z / 2) * (z - (z / 2));
    cout << ans << endl;
}

int32_t main()
{
    freePalestine;
    int t;
    cin >> t;
    // cin.ignore();
    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case #"<<i<<": ";
        tajwone17();
    }
}