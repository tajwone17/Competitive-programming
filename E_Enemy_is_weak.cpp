#include <bits/stdc++.h>
using namespace std;

#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int
#define all(n) for(int i=0;i<(n);i++)
#define sort(v) sort((v).begin(),(v).end())
#define rsort(v) sort((v).rbegin(),(v).rend())
#define endl "\n"
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
// const int N = 1e5 + 10;
// const int MAX = 200'007;
// int a[MAX];

// const int M=998244353;
// // long long mod(long long x){
// //     return ((x%M + M)%M);
// // }
// // long long add(long long a, long long b){
// //     return mod(mod(a)+mod(b));
// // }
// long long mul(long long a, long long b){
//     return mod(mod(a)*mod(b));
// }
int a[100005], seg[4 * 100005];
void build(int idx, int low, int high)
{

    if (low == high)
    {
        seg[idx] = a[low];
        return;
    }
    int mid = (low + high) / 2;
    build(2 * idx + 1, low, mid);
    build(2 * idx + 2, mid + 1, high);
    seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
}
int query(int idx, int low, int high, int l, int r)
{
    if (l <= low && r >= high)
        return seg[idx];
    if (high < l || low > r)
        return 0;
    int mid = (low + high) / 2;
    int left = query(2 * idx + 1, low, mid, l, r);
    int right = query(2 * idx + 2, mid + 1, high, l, r);
    return left + right;
}
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];

}

 main()
{
    faster;
   
        solve();
    
}