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
const int N = 2e5 + 10;
vector<vector<int>> p(N + 1);
void tajwone17()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int ans = 2;
    map<int, int> count;
    for (int i = 0; i < n; i++)
    {
        for (auto it : p[a[i]])
        {
            if (count[it] >= 1)
            {
                ans = 0;
                cout << 0 << endl;
                return;
            }
            count[it]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (auto it : p[a[i]])
        {

            count[it]--;
        }
        for (auto it2 : p[a[i] + 1])
        {
            if (count[it2] >= 1)
            {
                ans = 1;
                cout << 1 << endl;
                return;
            }
        }
        for (auto it : p[a[i]])
        {

            count[it]++;
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    freePalestine;
    int t;
    cin >> t;
    // cin.ignore();
    for (int i = 2; i <= N; i++)
    {
        if (!p[i].empty())
            continue;
        for (int j = i; j <= N; j += i)
        {
            p[j].push_back(i);
        }
    }
    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case #"<<i<<": ";
        tajwone17();
    }
    technologia;
}