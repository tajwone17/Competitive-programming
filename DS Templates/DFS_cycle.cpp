#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
bool visited[N];
vector<int> g[N];
vector<int> current_cc;
vector<vector<int>> cc;
bool dfs(int v, int par)
{
    // take action on vertex before entering the vertex
    visited[v] = true;
bool isLoopExists=false;
    for (int child : g[v])
    {
        if (visited[child] && child == par)
            continue;
        if (visited[child])
            return true;
        // take action on child before entering the child node
       isLoopExists|= dfs(child, v);
        // take action on child after exiting the child node
    }
    return isLoopExists;
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
    bool isLoopExists=false;
    for (int i = 1; i <= v; i++)
    {
        if (visited[i])
            continue;

        if(dfs(i, 0)){
            isLoopExists=true;
            break;
        }
    }
    cout<<isLoopExists<<endl;
}
