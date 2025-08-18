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
    vector<int> a(n);
    vector<int> count(1e6 + 1, 0ll);
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        count[a[i]]++;
    }
    int sum = accumulate(a.begin(), a.end(), 0ll);

    for (int i = 0; i < n; i++)
    {
        sum -= a[i];
        count[a[i]]--;
        if (sum % 2 == 0 && sum / 2 <= 1e6 && count[sum / 2] > 0)
        {
            ans.push_back(i + 1);
        }
        count[a[i]]++;
        sum += a[i];
    }

    cout << ans.size() << endl;
    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
}

int32_t main()
{
    freePalestine;

    tajwone17();

    technologia;
}