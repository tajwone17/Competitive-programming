#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int max = 0, a, b;
        int i, winner;
        for (i = 1; i <= n; i++)
        {
            cin >> a >> b;
            if (b > max && a <= 10)
            {
                max = b;
                winner = i;
            }
        }
        cout << winner << endl;
    }
}