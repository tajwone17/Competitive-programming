#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int k = abs(a - b);
        if (a == b)
            cout << 0 << endl;
        else if (a < b)
        {
            if (k % 2 != 0)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }

        else if (a > b)
        {
            if (k % 2 == 0)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
}