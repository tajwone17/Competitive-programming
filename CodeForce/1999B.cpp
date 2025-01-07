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
        int a1, a2, b1, b2, count1 = 0, count2 = 0, ans = 0;
        ;
        cin >> a1 >> a2 >> b1 >> b2;

        if (a1 > b1)
            count1++;
        else if (a1 == b1)
        {
        }
        else
            count2++;
        if (a2 > b2)
            count1++;
        else if (a2 == b2)
        {
        }
        else
            count2++;

        if (count1 > count2)
            ans++;

        count1 = 0;
        count2 = 0;
        if (a2 > b1)
            count1++;
        else if (a2 == b1)
        {
        }
        else
            count2++;
        if (a1 > b2)
            count1++;
        else if (a1 == b2)
        {
        }
        else
            count2++;

        if (count1 > count2)
            ans++;

        cout << ans * 2 << endl;
    }
}