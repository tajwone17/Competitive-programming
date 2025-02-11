#include <bits/stdc++.h>
using namespace std;

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int

main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        bool flag = false;

        if (y == x + 1)
        {
            flag = true;
        }
        else if (y < x && (x - y + 1) % 9 == 0)
        {
            flag = true;
        }

        if (flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}