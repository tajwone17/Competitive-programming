#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        if (arr[0] < arr[2] && arr[0] < arr[3] && arr[1]<arr[2] && arr[1]<arr[3])
            cout << "NO" << endl;
        else if (arr[0] > arr[2] && arr[0] > arr[3] && arr[1]>arr[2] && arr[1]>arr[3])
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}