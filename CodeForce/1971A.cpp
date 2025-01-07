#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[2];
        cin >> arr[0] >> arr[1];
        sort(arr, arr + 2);
        cout << arr[0] << " " << arr[1] << endl;
    }
}