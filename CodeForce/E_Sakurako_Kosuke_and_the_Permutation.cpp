#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define OR ||
#define AND &&
int cnt;
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
void dfs(vector<int> &visited, int i, vector<vector<int>> &adjacent)
{
    visited[i] = 1;
    cnt++;
    for (auto it : adjacent[i])
    {
        if (visited[it] != 1)
            dfs(visited, it, adjacent);
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    // cin.ignore();
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        vector<int> v(n + 1);
        vector<int> visited(n + 1, 0);
        vector<vector<int>> adjacent(n + 1);
        vector<int> idx(n + 2);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            idx[v[i]] = i;
        }
        for (int i = 1; i <= n; i++)
        {
            if (v[i] == i or v[v[i]] == i)
                continue;
            adjacent[i].push_back(idx[i]);
        }
        for (int i = 1; i <= n; ++i)
        {
            cnt = 0;
            if (visited[i] == 0)
            {
                dfs(visited, i, adjacent);
                ans += (cnt - 1) / 2;
            }
        }
        cout << ans << endl;
    }
}