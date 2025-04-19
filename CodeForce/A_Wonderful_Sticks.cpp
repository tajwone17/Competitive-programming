#include <bits/stdc++.h>
using namespace std;

#define freePalestine             \
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

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    vector<int> res(n);        
    vector<int> used(n + 1, 0);
    int small = 1, large = n;


    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] == '<')
        {
            res[i + 1] = small;
            used[small] = 1;
            small++;
        }
        else
        {
            res[i + 1] = large;
            used[large] = 1;
            large--;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (!used[i])
        {
            res[0] = i;
            break;
        }
    }


    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
}

main()
{
    freePalestine;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
