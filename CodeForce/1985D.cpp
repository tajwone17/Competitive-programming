#include <bits/stdc++.h>
using namespace std;
#define int long long int

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, row1 = -1, row2 = -1, col1 = -1, col2 = -1;

        cin >> n >> m;
        char arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == '#' && row1 == -1)
                {
                    row1 = i;
                    col1 = j;
                }
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                if (arr[i][j] == '#')
                {
                    row2 = i;
                    col2 = j;
                    break;
                }
            }
            if (row2 != -1)
                break;
        }
        row1++;
        col1++;
        row2++;
        col2++;
        cout << (row1 + (row2 - row1) / 2) << " " << (col1 + (col2 - col1) / 2) << endl;
    }
}