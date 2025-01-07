#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int n, flag = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            flag = 1;
    }
    if (flag == 1)
        cout << -1 << endl;
    else
        cout << 1 << endl;
}