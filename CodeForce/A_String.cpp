#include <bits/stdc++.h>
using namespace std;
#define int long long int
// const int N = 1e5 + 10;
// const int MAX = 200'007;
// int a[MAX];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    // cin.ignore();
    while (t--)
    {
        string s;
        int cnt = 0;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                cnt++;
        }
        cout << cnt << endl;
    }
}