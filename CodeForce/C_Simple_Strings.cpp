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
    string s;
    cin >> s;
    int i = 0;
    int j = 1;

    while (i < s.size())
    {
        while (j < s.size() && s[j] == s[i])
            j++;
        if (j - i > 0)
        {

            char c = 'a';
            while (c == s[i] || (i > 0 && c == s[i - 1]) || (j < s.size() && c == s[j]))
                c++;
            for (int k = i + 1; k < j; k += 2)
            {
                s[k] = c;
            }
        }
        i = j;
    }
    cout << s;
}

int32_t main()
{
    freePalestine;

    tajwone17();
}