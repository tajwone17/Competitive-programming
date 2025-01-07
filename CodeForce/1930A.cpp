#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, result = 0;
        ;
        cin >> n;
        int arr[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 2*n);
        for (int i = 0; i < 2 * n; i += 2)
        {
            result = result + min(arr[i], arr[i + 1]);
        }
        cout << result << endl;
    }
}