#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
bool visited[N];
vector<int> g[N];
vector<int> current_cc;
vector<vector<int>> cc;
void dfs(int v)
{
    // take action on vertex before entering the vertex
    visited[v] = true;
    // cout << v << endl;
    current_cc.push_back(v);
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
int main()

{
    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        g[n1].push_back(n2);
        g[n2].push_back(n1);
    }
    for (int i = 1; i <= v; i++)
    {
        if (visited[i])
            continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc);
        // ct++;
    }
    cout << cc.size() << endl;
    for (auto c_cc : cc)
    {
        for (auto vertex : c_cc)
        {
            cout << vertex << " ";
        }
        cout << endl;
    }
}
