#include <bits/stdc++.h>
using namespace std;
#define int long long int

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, count = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        int max = v[0];
        for (int i = 0; i < n; ++i)
        {
            sum += v[i];
            if (v[i] > max)
                max = v[i];
            if ((sum - max) == max)
                count++;
        }
        cout << count << endl;
    }
}