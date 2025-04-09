#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MOD 998244353
const int MAX_N = 3e5 + 10;

vector<int> graph[MAX_N];
int visited[MAX_N];

int mod_pow(int base, int exp) {
    int res = 1;
    while (exp > 0) {
        if (exp & 1)
            res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return res;
}

bool dfs(int v, int color, int& count0, int& count1) {
    visited[v] = color;
    if (color == 0) count0++;
    else count1++;

    for (int u : graph[v]) {
        if (visited[u] == -1) {
            if (!dfs(u, 1 - color, count0, count1))
                return false;
        } else if (visited[u] == visited[v]) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        graph[i].clear();
        visited[i] = -1;
    }

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int result = 1;
    for (int i = 1; i <= n; i++) {
        if (visited[i] == -1) {
            int count0 = 0, count1 = 0;
            if (!dfs(i, 0, count0, count1)) {
                cout << 0 << "\n";
                return;
            }
            int ways = (mod_pow(2, count0) + mod_pow(2, count1)) % MOD;
            result = (result * ways) % MOD;
        }
    }

    cout << result << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
}
