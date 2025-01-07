#include <bits/stdc++.h>
using namespace std;
#define int long long int


main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int matrix[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        }
    
            int up, down, left, right;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {

                    if (i > 0)
                        up = matrix[i - 1][j];
                    else
                        up = 0;
                    if (j > 0)
                        left = matrix[i][j - 1];
                    else
                        left = 0;
                   
                    if (i < n - 1)
                        down = matrix[i + 1][j];
                    else
                        down = 0;
                    if (j < m - 1)
                        right = matrix[i][j + 1];
                    else
                        right = 0;

                    int maxNeighbour = max({up,down,left,right});
                    if (maxNeighbour < matrix[i][j])
                    {
                        matrix[i][j] = maxNeighbour;
                       
                        
                    }
                
                }
            }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
      
    }
}
