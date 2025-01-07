#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int n, sum1 = 0, sum2 = 0, count = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];

        sum1 += arr[i];
    }
    sort(arr.rbegin(), arr.rend());

    for (int i = 0; i < n; i++)
    {
        sum2 += arr[i];

        count++;
        if (sum2 > (sum1 - sum2))
            break;
    }
    cout << count << endl;
}