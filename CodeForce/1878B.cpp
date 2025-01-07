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
        cin >> n;
        for (int i = 1; i <= n * 2; i++)
        {
            if (i % 2 != 0)
                cout << i << " ";
        }
    }
}