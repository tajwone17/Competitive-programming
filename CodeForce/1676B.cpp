#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int min = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < min)
                min = arr[i];
        }
        int diff = 0, k;

        for (int i = 0; i < n; i++)
        {
            k = arr[i] - min;
            diff = diff + k;
        }
        cout << diff << endl;
    }
}