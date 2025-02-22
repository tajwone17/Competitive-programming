#include <bits/stdc++.h>
using namespace std;

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int
#define endl "\n"
#define no cout << "NO" << endl
#define yes cout << "YES" << endl

vector<int> path;
bool found = false;

void dfs(int a, int b)
{
    path.push_back(b);

    if (a == b)
    {
        found = true;
        return;
    }

    if (b < a)
    {
        path.pop_back();
        return;
    }

    if (b % 10 == 1)
    {
        dfs(a, b / 10);
        if (found)
            return;
    }

    if (b % 2 == 0)
    {
        dfs(a, b / 2);
        if (found)
            return;
    }

    path.pop_back();
}

void solve()
{
    int a, b;
    cin >> a >> b;

    dfs(a, b);

    if (found)
    {
        yes;
        cout << path.size() << endl;
        for (int i = path.size() - 1; i >= 0; i--)
        {
            cout << path[i] << " ";
        }
        cout << endl;
    }
    else
    {
        no;
    }
}

int32_t main()
{
    faster;
    solve();
    return 0;
}
