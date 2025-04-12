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

// const int MAX = 200'007;

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
    vector<int> prime(n + 10, 1);
    for (int i = 2; i * i <= n + 1; i++)
    {
        if (prime[i] == 1)
        {

            for (int j = i * i; j <= n + 1; j += i)
            {
                prime[j] = 0;
            }
        }
    }
    if (n < 3)
        cout << 1 << endl;
    else
        cout << 2 << endl;
    for (int i = 2; i <= n + 1; i++)
    {
        cout << prime[i] << " ";
    }
}

main()
{
    freePalestine;

    tajwone17();
}