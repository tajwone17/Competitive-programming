#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b && c % 2 != 0 || a > b)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }
}