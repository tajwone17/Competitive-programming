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
    int n, k;
    int ans = 0;
    cin >> n >> k;
    vector<int> v(n);
    int l = 0, r = n - 1;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    while (l <= r)
    {
        int mid = (l + r) / 2;
        vector<int> temp = vector<int>(v.begin(), v.begin() + mid + 1);
        sort(temp.begin(), temp.end());
        int cost = 0;

        bool fnd = false;
        for (int i = mid; i >= 0; i -= 2)
        {
            cost += temp[i];
            if (cost > k)
            {
                r = mid - 1;
                fnd = true;
                break;
            }
        }

        if (!fnd)
        {
            l = mid + 1;
        }
    }
    cout << r + 1 << endl;
}

int32_t main()
{
    freePalestine;

    tajwone17();
}