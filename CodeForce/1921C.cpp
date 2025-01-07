#include <bits/stdc++.h>
using namespace std;
#define int long long int

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f, a, b, k;
        cin >> n >> f >> a >> b;
        vector<int> mess(n);
        for (int i = 0; i < n; i++)
        {
            cin >> mess[i];
        }
        int prev = 0;
        for (int i = 0; i < n; i++)
        {
            k = (abs(prev - mess[i])) * a;
            int m = min(b, k);
            f -= m;
            prev = mess[i];
        }
        if (f > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}