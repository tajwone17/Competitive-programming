#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int cos = 0, cof = 0, count = 0;
        int n, k = 0;
        string s, f;
        cin >> n >> s >> f;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                cos++;
            if (f[i] == '1')
                cof++;

            if (f[i] == '1' && s[i] == '0')
                count++;
        }
        if (cos > cof)
            k = cos - cof;
        cout << k + count << endl;
    }
}