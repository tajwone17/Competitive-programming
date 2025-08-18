#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 1e5 + 10;
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
        int n, cnt = 0;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] != s2[i])
                cnt++;
        }

        if (cnt % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}