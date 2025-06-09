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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int open = 0, close = 0;
    int need = k / 2;
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (open < need && s[i] == '(')
        {
            st.push(s[i]);
            cout << s[i];
            open++;
        }
        if (close < need && s[i] == ')')
        {
            if (!st.empty())
            {
                cout << s[i];
                st.pop();
                close++;
            }
        }
    }
    cout << endl;
}

int32_t main()
{
    freePalestine;

    tajwone17();
}
