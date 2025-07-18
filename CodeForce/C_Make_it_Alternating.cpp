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
#define technologia return 0

const int M = 998244353;

int factorial(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res = (res * i) % M;
    }
    return res;
}

void tajwone17()
{
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;
    int ans1 = 1;

    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == s[i])
        {
            cnt++;
        }
        else
        {
            if (cnt > 1)
            {
                ans += cnt - 1;
                ans1 = (ans1 * cnt) % M;
            }
            cnt = 1;
        }
    }
    if (cnt > 1)
    {
        ans += cnt - 1;
        ans1 = (ans1 * cnt) % M;
    }
cout<< ans << " " << ans1 << endl;
    ans1 = (ans1 * factorial(ans)) % M;

    cout << ans << " " << ans1 << endl;
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
    technologia;
}
