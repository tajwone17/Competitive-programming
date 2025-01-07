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
        int sum = 0, sum1 = 0, flag = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
        }
        int avg = sum / n;
        if (n == 1)
            cout << "YES" << endl;
        else if (arr[0] < avg || arr[n - 1] > avg)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > avg)
                    sum1 = sum1 + (arr[i] - avg);
                if (arr[i] < avg)
                {
                    if (sum1 < (avg - arr[i]))
                    {
                        flag = 1;
                        break;
                    }
                    else
                        sum1 = sum1 - (avg - arr[i]);
                }
            }
            if (flag == 1)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
}
