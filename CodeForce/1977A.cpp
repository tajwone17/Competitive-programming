#include <bits/stdc++.h>
using namespace std;
#define int long long int

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n < m)
            cout << "NO" << endl;
        else
        {

            int z = n - m;
            if (z % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
