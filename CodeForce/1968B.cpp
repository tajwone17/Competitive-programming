#include <bits/stdc++.h>
using namespace std;
#define int long long int
// const int N = 1e5 + 10;
// int a[N];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, count = 0;
        cin >> n >> m;
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;
        int idx = 0;
        for (int i = 0; i < m; i++)
        {
            if (s1[idx] == s2[i])
            {
                idx++;
                count++;
            }
        }
        cout << count << endl;
    }
}