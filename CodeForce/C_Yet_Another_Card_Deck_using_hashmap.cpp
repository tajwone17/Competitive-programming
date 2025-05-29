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
// int mod(long long x){A
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
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> b(q);
    vector<int> pos(51, n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (pos[a[i]] == n)
            pos[a[i]] = i;
    }

    for (int i = 0; i < q; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < q; i++)
    {
        int j = pos[b[i]];
        cout << j + 1 << " ";

        for (int k = 1; k <= 50; k++)
        {
            if (pos[k] < j)
                pos[k]++;
        }

        pos[b[i]] = 0;
    }
}

int32_t main()
{
    freePalestine;

    tajwone17();
}
