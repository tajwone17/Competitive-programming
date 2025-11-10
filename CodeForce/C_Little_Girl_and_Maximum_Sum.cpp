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
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> prefix(n + 1, 0);
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        prefix[l - 1]++;
        if (r < n)
            prefix[r]--;
    }
    for (int i = 1; i <= n; i++)
        prefix[i] += prefix[i - 1];

    vector<pair<int, int>> freq;
    for (int i = 0; i < n; i++)
    {
        freq.push_back({prefix[i], i + 1});
    }
    sort(freq.rbegin(), freq.rend());
    int sum = 0;
    sort(arr.rbegin(), arr.rend());
    for (int i = 0; i < freq.size(); i++)
    {
        // cout << freq[i].first << " " << freq[i].second << endl;
        sum += arr[i] * freq[i].first;
    }
    cout << sum << endl;
}

int32_t main()
{
    freePalestine;

    tajwone17();

    technologia;
}