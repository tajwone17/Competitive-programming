#include <bits/stdc++.h>
using namespace std;
#define int long long int

void ornament(int n)
{
    char s[n][n];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i % 2 == 0)
                s[i][j] = 'R';
            else if (i % 2 != 0 && j % 2 != 0)
                s[i][j] = 'R';
            else if (i % 2 != 0 && j % 2 == 0)
                s[i][j] = 'W';
            cout << s[i][j];
        }
        cout << "\n";
    }
}
main()
{
    int n;
    cin >> n;
    ornament(n);
}