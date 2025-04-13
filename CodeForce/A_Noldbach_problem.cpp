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
const int N = 1000;
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
    int n, k;
    cin >> n >> k;
    vector<int> sieve(2 * n + 10, 1);
    vector<int> prime;
    for (int i = 2; i * i <= 2 * n + 1; i++)
    {
        if (sieve[i] == 1)
        {
            for (int j = i * i; j <= 2 * n + 1; j += i)
            {
                sieve[j] = 0;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (sieve[i] == 1)
        {
            prime.push_back(i);
        }
    }

    // for (int i = 0; i < prime.size(); i++)
    // {
    //   cout << prime[i] << " ";
    // }
    for (int i = 0; i < prime.size() - 1; i++)
    {
        if (sieve[prime[i] + prime[i + 1] + 1] == 1 && prime[i] + prime[i + 1] + 1 <= n)
            k--;
    }

    cout << (0 >= k ? "YES" : "NO") << endl;
}

main()
{
    freePalestine;

    tajwone17();
}