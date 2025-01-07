#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 1e5 + 10;
// int a[N];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1 || n == 3)
            cout << -1 << endl;
        else if (n == 2)
            cout << 66 << endl;
        else if (n == 4)
            cout << 3366 << endl;
        else if(n%2!=0)
        {
            for (int i = 1; i <= n; i++)
            {
                if (i == n || i == n - 1 || i == n - 3)
                    cout << 6;
                else
                    cout << 3;
            }
            cout << endl;
        }
        else{
            for (int i = 1; i <= n; i++)
            {
                if (i == n || i == n - 1)
                    cout << 6;
                else
                    cout << 3;
            }
            cout << endl;
        }
    }
}