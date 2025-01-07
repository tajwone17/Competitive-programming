#include <bits/stdc++.h>
using namespace std;
#define int long long int

main(){


    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int le = v[n - 1];
        int maxval = v[0];
        for (int i = 1; i < n - 1; i++)
        {
            maxval = max(maxval, v[i]);
        }
        cout << maxval + le << endl;
    }
}