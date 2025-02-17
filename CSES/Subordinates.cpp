#include <bits/stdc++.h>
using namespace std;

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int
#define all(n) for (int i = 0; i < (n); i++)
#define sort(v) sort((v).begin(), (v).end())
#define rsort(v) sort((v).rbegin(), (v).rend())
#define endl "\n"
#define no cout << "NO" << endl
#define yes cout << "YES" << endl

const int N = 2e5 + 10;
bool visited[N];
vector<int> g[N];
vector<int> ans(N);
void dfs(int v)
{
    // take action on vertex before entering the vertex
    int cnt = 0;
    visited[v] = true;

    for (int child : g[v])
    {
        if (visited[child])
            continue;
        // take action on child before entering the child node
        dfs(child);
        cnt += ans[child] + 1;
        // take action on child after exiting the child node
    }
    // take action on vertex before exiting the vertex
    ans[v] = cnt;
}

main()
{
    faster;
    int n;
    cin >> n;
    for (int i = 1; i <= n - 1; i++)
    {
        int n1;
        cin >> n1;
        g[i + 1].push_back(n1);
        g[n1].push_back(i + 1);
    }
    dfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}