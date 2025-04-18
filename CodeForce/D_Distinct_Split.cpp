#include <bits/stdc++.h>
using namespace std;

#define freePalestine             \
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
    int n, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    vector<int> suffix(n, 0);
    vector<int> prefix(n, 0);
    set<char> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(s[i]);
        prefix[i] = st.size();
    }
    st.clear();
    for (int i = n - 1; i >= 0; i--)
    {
        st.insert(s[i]);
        suffix[i] = st.size();
    }

    for (int i = 0; i < n - 1; i++)
    {
        ans = max(ans, prefix[i] + suffix[i + 1]);
    }
    for (int i = n - 1; i > 0; i--)
    {
        ans = max(ans, suffix[i] + prefix[i - 1]);
    }
    cout << ans << endl;
}

main()
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