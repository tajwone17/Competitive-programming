#include <bits/stdc++.h>
using namespace std;
#define int long long int
// const int N = 1e5 + 10;
// int a[N];

main()

{
    int t;
    cin >> t;
    while (t--)
    {

        int n, count = 0, max_count = 0, count0 = 0, count1 = 0;
        string s;
        cin >> n >> s;
        int i = 0;
        while (i < n)
        {
            if (s[i] == '0')
            {
                while (s[i] == '0' && i < n)
                    i++;
                count0++;
            }
            else
            {
                count1++;
                i++;
            }
        }

        if (count1 > count0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}