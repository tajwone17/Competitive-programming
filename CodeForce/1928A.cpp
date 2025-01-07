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
        if (a > b)
            swap(a, b);

        if (((a % 2 == 1) && (b % 2 == 1)) || ((a % 2 == 1) && (b == a * 2)))

            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}