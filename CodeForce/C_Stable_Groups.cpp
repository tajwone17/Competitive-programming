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
    int n, x, k;
    cin >> n >> k >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cnt = 0;
    sort(a.begin(), a.end());
    vector<int> diff;
    int total = 1;
    for (int i = 0; i < n - 1; i++)
    {

        if (a[i + 1] - a[i] > x)
        {
            total++;
            diff.push_back(a[i + 1] - a[i]);
        }
    }
    sort(diff.begin(), diff.end());

    // for(int i=0;i<diff.size();i++)
    // {
    //     cout << diff[i] << " ";
    // }
    // cout << endl;
    for (int i = 0; i < diff.size(); i++)
    {
        // cout<<((diff[i]+x-1) / x )- 1 << " ";
        // // cout<<endl;
        if ((((diff[i] + x - 1) / x) - 1) <= k)
        {
            k -= ((diff[i] + x - 1) / x) - 1;
            cnt++;
        }
        else
            break;
    }
    // cout<<total << " " << cnt << endl;
    cout << total - cnt << endl;
}

int32_t main()
{
    freePalestine;

    tajwone17();

    technologia;
}