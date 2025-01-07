#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c[8][8];
        string word;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> c[i][j];
                if (c[i][j] != '.')
                    word = word + c[i][j];
            }
        }
        cout << word << endl;
    }
}