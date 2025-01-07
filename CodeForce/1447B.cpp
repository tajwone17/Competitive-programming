#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int MOD = 1e9 + 7;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, flag = 0, countN = 0;
        cin >> n >> m;
        int arr[n][m];
        int sum = 0;
        int me = INT16_MAX;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                me = min(me, abs(arr[i][j]));
                if (arr[i][j] < 0)
                    countN++;

                if (arr[i][j] == 0)
                    flag = 1;

                sum += abs(arr[i][j]);
            }
        }

        int ans = sum - 2 * me;
        if (flag == 1 || countN % 2 == 0)
        {
            cout << sum << endl;
        }
        else
            cout << ans << endl;
    }
}