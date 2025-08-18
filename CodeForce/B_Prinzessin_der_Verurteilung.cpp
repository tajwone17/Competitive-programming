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
    string s;
    cin >> s;
    string mex = "";
    for (char c = 'a'; c <= 'z'; c++)
    {
        if (s.find(c) == string::npos)
        {
            mex += c;
            cout << mex << endl;
            return;
        }
    }
    for (char c = 'a'; c <= 'z'; c++)
    {
        for (char d = 'a'; d <= 'z'; d++)
        {
            string tmp = "";
            tmp += c;
            tmp += d;
            if (s.find(tmp) == string::npos)
            {
                cout << tmp << endl;
                return;
            }
        }
    }
    for (char c = 'a'; c <= 'z'; c++)
    {
        for (char d = 'a'; d <= 'z'; d++)
        {
            for (char e = 'a'; e <= 'z'; e++)
            {
                string tmp = "";
                tmp += c;
                tmp += d;
                tmp += e;
                if (s.find(tmp) == string::npos)
                {
                    cout << tmp << endl;
                    return;
                }
            }
        }
    }
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