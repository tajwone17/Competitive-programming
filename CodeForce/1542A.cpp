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
        int count = 0;
        int arr[2 * n];

        for (int i = 0; i < (2 * n); i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 1)
                count++;
        }

        if (count == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}