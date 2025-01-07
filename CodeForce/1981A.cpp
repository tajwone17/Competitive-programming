#include <bits/stdc++.h>
using namespace std;
#define int long long int

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int score = 0;
        int p = 2;
        while (p <= r)
        {
            score++;
            p *= 2;
        }
        cout << score << endl;
    }
}