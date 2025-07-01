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
    vector<int> height(n), question(q);
    vector<int> prefix(n + 1, 0);
    vector<int> answer(q, 0);

    vector<int> prefixMax(n + 1, 0);
    for (int i = 0; i < n; i++)
        cin >> height[i];
    for (int i = 0; i < q; i++)
        cin >> question[i];

    prefix[0] = height[0];
    prefixMax[0] = height[0];
    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + height[i];
    for (int i = 1; i < n; i++)
    {
        prefixMax[i] = max(prefixMax[i - 1], height[i]);
    }
    for (int i = 0; i < q; i++)
    {
        int l = 0, r = n - 1, ans = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (prefixMax[mid] <= question[i])
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (ans == -1)
            answer[i] = 0;
        else
            answer[i] = prefix[ans];
    }
    for (int i = 0; i < q; i++)
    {
        cout << answer[i] << " ";
    }
    cout << endl;
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
}