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
const int N = 1e6 + 10;
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
    vector<int> prime(N, 1);
    set<int> st;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 2; i * i <= N + 1; i++)
    {
        if (prime[i] == 1)
        {

            for (int j = i * i; j <= N + 1; j += i)
            {
                prime[j] = 0;
            }
        }
    }
    for (int i = 2; i < N; i++)
    {
        if (prime[i] == 1)
            st.insert(1ll * i * i);
    }
    for (auto x : v)
    {
        if (st.count(x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

main()
{
    freePalestine;

    tajwone17();
}