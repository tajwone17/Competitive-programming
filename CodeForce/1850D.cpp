#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, count = 1, ans = 1;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 1; i < n; i++)
        {
            if ((arr[i] - arr[i - 1]) <= k)
            {
                count++;
            }
            else
                count = 1;
            ans = max(ans, count);
        }

        cout << n - ans << endl;
    }
}