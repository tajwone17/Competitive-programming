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
vector<int> primes;
void sieve(vector<int> &a, int n)
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            a.push_back(i);
        }
    }
}
void tajwone17()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int x = a[i];
        int j = 2;
        for (auto p : primes)
        {
            if (p)
            {
                while (p * p <= x)
                {
                    if (x % p == 0)
                    {
                        mp[p]++;
                        x /= p;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        if (x > 1)
        {
            mp[x]++;
        }
    }
    for (auto &it : mp)
    {
        if (it.second % n != 0)
        {
            no;
            return;
        }
    }
    yes;
}

int32_t main()
{
    freePalestine;
    int t;
    cin >> t;
    sieve(primes, 1000000); // Precompute primes up to 1,000,000
    // cin.ignore();
    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case #"<<i<<": ";
        tajwone17();
    }
    technologia;
}