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
        int arr[n];

        int z = 0, nc = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0)
                nc++;
            else if (arr[i] == 0)
                z++;
        }
        if (nc % 2 != 0 || z > 0)
        {
            cout << 0 << endl;
        }

        else
        {
            cout << 1 << endl;
            cout << 1 << " " << 0 << endl;
        }
    }
}