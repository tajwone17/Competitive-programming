#include <bits/stdc++.h>
using namespace std;
#define int long long int

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        bool yes = true;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i < n-1; i++)
        {
            if (2 * a[i - 1] <= a[i] && a[i + 1] >= a[i - 1])
            {

                a[i] -= 2 * a[i - 1];
                a[i + 1] -= a[i - 1];
                a[i - 1] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                yes = false;
                break;
            }
        }
        if (yes)

            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
}