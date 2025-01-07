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
        int count = 0, maxCount = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == 'L')
                count++;
            if (count > maxCount)
                maxCount = count;
            if (s[i] == 'R')
            {

                count = 0;
            }
        }
        cout << maxCount + 1 << endl;
    }
}