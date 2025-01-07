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
        int arr[n + 10];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int index = n + 1;
        vector<int> v;
        int min = arr[0];
        v.push_back(arr[0]);
        for (int i = 1; i < n; i++)
        {
            if (min <= arr[i])
            {
                min = arr[i];
                v.push_back(min);
            }
            else
            {
                index = i;
                break;
            }
        }
        vector<int> ans;

        for (int i = index; i < n; i++)
        {
            ans.push_back(arr[i]);
        }
        for (int i = 0; i < v.size(); i++)
        {
            ans.push_back(v[i]);
        }
      
        if (is_sorted(ans.begin(), ans.end()))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
