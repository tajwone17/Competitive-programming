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
    int total = n * n;

    if (k == total - 1 ) {
        no;
        return;
    }
   

    if (n == 2 && k == 1) {
          yes;
        cout << "UD" << endl;
        cout << "RU" << endl;
        return;
    }

    yes;
    vector<int> row(n, 0);
    int rem = k;

    for (int i = 0; i < n; i++) {
        int left = n - i - 1;
        int take = min(n, rem);
        while (take >= 0 && (take == n - 1 || (rem - take == left * n - 1))) take--;
        if (take < 0) take = 0;
        row[i] = take;
        rem -= take;
    }

    vector<vector<char>> grid(n, vector<char>(n, 'L'));

    for (int i = 0; i < n; i++) {
        int v = row[i];
        if (v != n) grid[i][v] = 'R';
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << grid[i][j];
        cout << endl;
    }
}

int32_t main()
{
    freePalestine;
    int t;
    cin >> t;
    while (t--)
    {
        tajwone17();
    }
    technologia;
}