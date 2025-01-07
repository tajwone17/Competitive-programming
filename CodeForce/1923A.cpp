#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, fi, li, count = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                fi = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == 1)
            {
                li = i;
                break;
            }
        }
        for (int i = fi; i <= li; i++)
        {
            if (arr[i] == 0)
                count++;
        }
        cout << count << endl;
    }
}