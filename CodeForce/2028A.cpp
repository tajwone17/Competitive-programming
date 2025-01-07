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
        int n, a, b, x = 0, y = 0;
        cin >> n >> a >> b;
        bool found = false;
        string s;
        cin >> s;
        int i = 0;
        for (int k = 0; k < n * 200; ++k)
        {
            if (s[i] == 'N')
                y++;
            else if (s[i] == 'S')
                y--;
            else if (s[i] == 'E')
                x++;
            else
                x--;
            i++;
            if (i == n)
                i = 0;
            if (x == a && y == b)
            {
                found = true;
                break;
            }
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}