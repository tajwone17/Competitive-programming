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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int result = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (result < arr[i])
                result = arr[i];
            else
            {
                result = (((result / arr[i]) + 1) * arr[i]);
            }
        }
        cout << result << endl;
    }
}