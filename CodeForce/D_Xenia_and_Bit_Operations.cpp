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

int a[250005], seg[4 * 250005];
void build(int idx, int low, int high, char itr)
{

    if (low == high)
    {
        seg[idx] = a[low];

        return;
    }
    int mid = (low + high) / 2;
    build(2 * idx + 1, low, mid, itr == 'x' ? 'o' : 'x');
    build(2 * idx + 2, mid + 1, high, itr == 'x' ? 'o' : 'x');
    if (itr == 'x')
    {
        seg[idx] = seg[2 * idx + 1] ^ seg[2 * idx + 2];
    }
    else
    {
        seg[idx] = seg[2 * idx + 1] | seg[2 * idx + 2];
    }
}
void updateTree(int i, int idx, int value, int low, int high, char itr)
{
    if (low == high)
    {
        seg[idx] = value;
        return;
    }
    int mid = (low + high) / 2;
    if (i <= mid)
    {
        updateTree(i, idx * 2 + 1, value, low, mid, itr == 'x' ? 'o' : 'x');
    }
    else
        updateTree(i, idx * 2 + 2, value, mid + 1, high, itr == 'x' ? 'o' : 'x');

    if (itr == 'x')
    {
        seg[idx] = seg[2 * idx + 1] ^ seg[2 * idx + 2];
    }
    else
    {
        seg[idx] = seg[2 * idx + 1] | seg[2 * idx + 2];
    }
}

void tajwone17()
{
    int n, m;
    cin >> n >> m;
    int len = 1 << n;

    for (int i = 0; i < len; i++)
    {
        cin >> a[i];
    }
    char itr = (n % 2 == 0) ? 'x' : 'o';
    build(0, 0, len - 1, itr);
    for (int i = 0; i < m; i++)
    {
        int p, b;
        cin >> p >> b;

        updateTree(p - 1, 0, b, 0, len - 1, itr);
        cout << seg[0] << endl;
    }
}

int32_t main()
{
    freePalestine;

    tajwone17();

    technologia;
}