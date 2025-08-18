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
#define technologia return 0

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
    string s1, s2;
    cin >> s1 >> s2;
    vector<int> pref(n, 0);

    int cnt1 = 0, cnt0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == '1')
            cnt1++;
        else
            cnt0++;
        if (cnt0 == cnt1)
            pref[i] = 1;
    }
    bool isFlipped = false;
    for (int i = n - 1; i >= 0; i--)
    {

        if (!isFlipped)
        {
            if (s1[i] != s2[i])
            {
                if (pref[i])
                {
                    isFlipped = true;
                }
                else
                {
                    no;
                    return;
                }
            }
        }
        else
        {
            if (s1[i] == s2[i])
            {
                if (pref[i])
                {
                    isFlipped = false;
                }
                else
                {
                    no;
                    return;
                }
            }
        }
    }
    yes;
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
    technologia;
}