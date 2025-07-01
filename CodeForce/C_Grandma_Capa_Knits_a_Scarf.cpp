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
// int mod(long long x){
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool isPossible = true;
    int ans = INT_MAX;
    int cnt;
    set<char> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(s[i]);
    }
    for (auto c : st)
    {
        cnt = 0;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            if (s[l] == s[r])
            {
                l++;
                r--;
            }
            else if (s[l] == c)
            {
                l++;
                cnt++;
            }
            else if (s[r] == c)
            {
                r--;
                cnt++;
            }
            else
            {
                cnt = INT_MAX;
                break;
            }
        }
        ans = min(ans, cnt);
    }
    if (ans == INT_MAX)
        cout << -1 << endl;
    else
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