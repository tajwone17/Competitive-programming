#include <bits/stdc++.h>
using namespace std;

#define freePalestine             \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int
// #define all(n) for (int i = 0; i < (n); i++)
// #define sort(v) sort((v).begin(), (v).end())
// #define rsort(v) sort((v).rbegin(), (v).rend())
// #define endl "\n"
// #define no cout << "NO" << endl
// #define yes cout << "YES" << endl
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
    int w, h;
    cin >> w >> h;
    int k1;
    cin >> k1;
    vector<int> x(k1);
    for (int i = 0; i < k1; i++)
    {
        cin >> x[i];
    }
    int ans1 = ((x[k1 - 1] - x[0]) * h);
    int k2;
    cin >> k2;
    vector<int> h1(k2);
    for (int i = 0; i < k2; i++)
    {
        cin >> h1[i];
    }
    int ans2 = ((h1[k2 - 1] - h1[0]) * h);
    int k3;
    cin >> k3;
    vector<int> y(k3);
    for (int i = 0; i < k3; i++)
    {
        cin >> y[i];
    }
    int ans3 = ((y[k3 - 1] - y[0]) * w);
    int k4;
    cin >> k4;
    vector<int> h2(k4);
    for (int i = 0; i < k4; i++)
    {
        cin >> h2[i];
    }
    int ans4 = ((h2[k4 - 1] - h2[0]) * w);
    int result = max(ans1, ans2);
    result = max(result, ans3);
    result = max(result, ans4);
    cout << result << endl;
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