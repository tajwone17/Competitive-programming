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
    string s, s1;
    cin >> s >> s1;
    vector<int> a, b;
    if (s[0] != s1[0])
    {
        no;
        return;
    }
    s = '.' + s;
    s1 = '.' + s1;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            a.back()++;
        else
            a.push_back(1);
    }
    for (int i = 1; i < s1.size(); i++)
    {
        if (s1[i] == s1[i - 1])
            b.back()++;
        else
            b.push_back(1);
    }
    if (a.size() != b.size())
    {
        no;
        return;
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (b[i] < a[i] || 2 * a[i] < b[i])
        {
            no;
            return;
        }
    }
    yes;
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