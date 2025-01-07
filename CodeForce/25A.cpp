#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if ((arr[i] % 2 == 0 && arr[i + 1] % 2 != 0 && arr[i + 2] % 2 != 0) || (arr[i] % 2 != 0 && arr[i + 1] % 2 == 0 && arr[i + 2] % 2 == 0))
        {
            cout << i + 1 << endl;
            break;
        }
        else if ((arr[i + 1] % 2 == 0 && arr[i] % 2 != 0 && arr[i + 2] % 2 != 0) || (arr[i + 1] % 2 != 0 && arr[i + 2] % 2 == 0 && arr[i] % 2 == 0))
        {
            cout << i + 2 << endl;
            break;
        }
        else if ((arr[i + 2] % 2 == 0 && arr[i] % 2 != 0 && arr[i + 1] % 2 != 0) || (arr[i + 2] % 2 != 0 && arr[i + 1] % 2 == 0 && arr[i] % 2 == 0))
        {
            cout << i + 3 << endl;
            break;
        }
    }
}
