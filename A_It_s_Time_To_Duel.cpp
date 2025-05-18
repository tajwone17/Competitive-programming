#include <bits/stdc++.h>
using namespace std;

#define freePalestine             \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int
#define endl "\n"
#define no cout << "NO" << endl
#define yes cout << "YES" << endl

void tajwone17()
{
    int n;
    cin >> n;
    vector<int> a(n);

    int total_wins = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total_wins += a[i];
    }

    if (total_wins > n - 1)
    {
        yes;
        return;
    }

    if (n == 2 && a[0] == a[1])
    {
        yes;
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == 0 && a[i + 1] == 0)
        {
            yes;
            return;
        }
    }

    no;
}

int32_t main()
{
    freePalestine;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        tajwone17();
    }
}
