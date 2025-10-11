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
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    unordered_map<int, int> total_count;
    for (int num : a)
        total_count[num]++;

    unordered_map<int, int> max_allowed;
    for (auto &p : total_count)
    {
        max_allowed[p.first] = p.second / k;
        if ((p.second % k) != 0)
        {
            cout << 0 << endl;
            return;
        }
    }

    unordered_map<int, int> freq;
    int left = 0;
    int ans = 0;

    for (int right = 0; right < n; right++)
    {
        freq[a[right]]++;

        while (freq[a[right]] > max_allowed[a[right]])
        {
            freq[a[left]]--;
            left++;
        }

        ans += right - left + 1;
    }
    cout << ans << endl;
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