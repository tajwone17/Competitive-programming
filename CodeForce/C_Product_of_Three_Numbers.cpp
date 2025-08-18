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

    if (n < 6)
    {
        no;
        return;
    }
    int a=0, b=0, c=0;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0 && i!=a)
        {
            a = i;
            n=n/ i;
            break;
        }
    }
    for (int j = 2; j*j <= n; j++)
    {
        if (n % j == 0 && j != a && j != 1 )
        {
            b = j;
            
            n /= j;
            break;
        }
    }
    c=n;
    if(n==1 || n == a || n == b ||a==b || a == c || b == c || c == 1 || c == 0|| a == 0 || b == 0)
    {
        no;
        return;
    }
    if (c != a && c != b && c > 1)
    {
        yes;
        cout << a << " " << b << " " << c << endl;
        return;
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