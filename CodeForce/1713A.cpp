#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int max1 = 0, max2 = 0, min1 = 0, min2 = 0;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            max1 = max(max1, a);
            max2 = max(max2, b);
            min1 = min(min1, a);
            min2 = min(min2, b);
        }
        cout << abs(min1) * 2 + abs(min2) * 2 + 2 * max1 + 2 * max2 << endl;
    }
}