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
    vector<int> a(n);
    vector<int> a_;
    vector<int> b(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != l)
        {
            a_.push_back(a[i]);
        }
        l = a[i];
    }
    vector<pair<int, int>> v;
    for (int i = 0; i < a_.size(); i++)
    {

        v.push_back({a_[i], i});
    }

    sort(v.rbegin(), v.rend());

    b[v[0].second] = 1;
    if (v[0].second < n - 1)
        b[v[0].second + 1] = 1;
    if (v[0].second > 0)
        b[v[0].second - 1] = 1;
    int cnt = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (b[v[i].second] == 1)
        {
            if (v[i].second < n - 1)
                b[v[i].second + 1] = 1;
            if (v[i].second > 0)
                b[v[i].second - 1] = 1;
        }
        else if (b[v[i].second] == 0)
        {
            b[v[i].second] = 1;
            if (v[i].second < n - 1)
                b[v[i].second + 1] = 1;
            if (v[i].second > 0)
                b[v[i].second - 1] = 1;
            cnt++;
        }
    }
    cout << cnt << endl;
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