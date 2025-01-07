#include <bits/stdc++.h>
using namespace std;
#define int long long int
// const int N = 1e5 + 10;
// const int MAX = 200'007;
// int a[MAX];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    // cin.ignore();
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        vector<int> v(n);
        vector<int> p(n);
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cin >> s;

        p[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            p[i] = v[i] + p[i - 1];
        }
        int l = 0;
        int r = n - 1;
        while (l <= r)
        {
            if (s[l] == 'L' && s[r] == 'R')
            {
                if (l == 0)
                    sum = p[r];
                else
                    sum = sum + (p[r] - p[l - 1]);
                l++;
                r--;
            }
            else if (s[l] == 'R')
                l++;
            else if (s[r] == 'L')
                r--;
        }
        cout << sum << endl;
    }
}