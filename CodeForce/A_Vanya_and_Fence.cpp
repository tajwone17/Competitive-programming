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
void solve(){
    int n,h;
    
cin >> n >> h;
int ans = n;
for (int i = 0; i < n; i++)
{int x;
    cin >> x;
    ans += (x>h);
}
cout << ans << endl;
}

 main()
{
    faster;
   // cout<<"Case #"<<i<<": ";
        solve();
    
}