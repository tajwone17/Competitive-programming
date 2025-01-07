#include <bits/stdc++.h>
using namespace std;
#define int long long int

main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        char j;
        for (int i = 0; i < n; i++)
        {
            for (char j = 97; j < 97 + k; j++)
            {
                cout << j;
            }
        }
        cout << endl;
    }
}