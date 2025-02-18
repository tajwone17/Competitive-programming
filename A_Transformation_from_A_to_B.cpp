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
const int N = 1e5 + 10;
bool visited[N];
vector<int> g[N];
vector<int> current_cc;
vector<vector<int>> cc;
void dfs(int v)
{
    // take action on vertex before entering the vertex
    visited[v] = true;
 
    for (int child : g[v])
    {
        if (visited[child])
            continue;
        // take action on child before entering the child node
        
        dfs(child);
        // take action on child after exiting the child node
    }
    // take action on vertex before exiting the vertex
}
 main()
{
    faster;
   int a,b;
   cin>>a>>b;
   for (int i = 0; i < ; i++)
   {
       int n1, n2;
       cin >> n1 >> n2;
       g[n1].push_back(n2);
       g[n2].push_back(n1);
   }
}