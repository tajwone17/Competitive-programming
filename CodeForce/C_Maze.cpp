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

int cnt = 0, s = 0;
vector<vector<bool>> visited;

void dfs(vector<vector<char>> &arr, int n, int m, int i, int j, int k)
{
    if (i < 0 || j < 0 || i >= n || j >= m || arr[i][j] != '.' || visited[i][j])
        return;

    visited[i][j] = true;
    cnt++;

    if (cnt > s - k)
        arr[i][j] = 'X';

    dfs(arr, n, m, i, j - 1, k);
    dfs(arr, n, m, i, j + 1, k);
    dfs(arr, n, m, i - 1, j, k);
    dfs(arr, n, m, i + 1, j, k);
}
void solve()
{
    faster;
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<char>> arr(n, vector<char>(m));
    visited.assign(n, vector<bool>(m, false));

    pair<int, int> start;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '.')
            {
                start.first = i;
                start.second = j;
                found = true;
                break;
            }
        }
        if (found)
            break;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '.')
                s++;
        }
    }
    if (found)
        dfs(arr, n, m, start.first, start.second, k);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}
main()
{

    solve();
}
