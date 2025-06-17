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
    int n, q, sum = 0;
    cin >> n >> q;
    vector<pair<int, int>> type1(n, {0, 0});

    for (int i = 0; i < n; i++)
    {
        cin >> type1[i].first;
        sum += type1[i].first;
        type1[i].second = 0;
    }
    pair<int, int> type2 = {0, -1};
    for (int qn = 1; qn <= q; qn++)
    {
        int z = -1;
        int i;
        bool flag = 0;
        cin >> i;
        if (i == 1)
        {
            int idx, value;
            cin >> idx >> value;
            if (type1[idx - 1].second < type2.second)
            {
                sum -= type2.first;
                ;
                sum += value;
                type1[idx - 1].first = value;
                type1[idx - 1].second = qn;
            }
            else
            {
                sum -= type1[idx - 1].first;
                sum += value;
                type1[idx - 1].first = value;
                type1[idx - 1].second = qn;
            }

            cout << sum << endl;
        }
        else
        {
            int val;
            cin >> val;
            type2.first = val;
            type2.second = qn;
            sum = n * val;
            cout << sum << endl;
        }
    }
}

int32_t main()
{
    freePalestine;

    tajwone17();
}