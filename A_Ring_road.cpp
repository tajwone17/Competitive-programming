#include <bits/stdc++.h>
using namespace std;

#define int long long
#define faster               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

const int N = 1e5 + 10;
bool visited[N];
vector<pair<int, int>> adj[N];

void dfs(int v, int &totalCost)
{
    // take action on vertex before entering the vertex
    visited[v] = true;

    for (auto child : adj[v])
    {
        if (visited[child.first])
            continue;
        // take action on child before entering the child node
        totalCost += child.second;
        dfs(child.first, totalCost);
        // take action on child after exiting the child node
    }
    // take action on vertex before exiting the vertex
}

int32_t main()
{
    faster;

    int n, total = 0;
    cin >> n;
    set<int> st;
    set<int> st1;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (st.find(a) != st.end() )
            adj[a].push_back({b, c});
        total += c;
        st.insert(a);
        st.insert(b);
    }
    int totalCost = 0;
    for (int i = 1; i <= n; i++)
    {

        if (visited[i])
            continue;
        dfs(i, totalCost);
    }
    int to = (total - totalCost);
    cout << min(to, totalCost) << endl;
}
