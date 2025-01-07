#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        string r="";
        cin >> s;

        int i = n - 1;
        int j = 0;
        while (i >= 0)
        {
            if (s[i] == 'a' || s[i] == 'e')
            {
                r[j] = s[i];
                r[j - 1] = s[i - 1];
                r[i- 2] = '.';
                i -= 2;
               
            }
            else
            {
                r[i] = s[i];
                r[i -1] = s[i - 1];
                r[i-2] = s[i - 2];
                r[i - 3] = '.';
                i -= 3;
                
            }
        }
        cout << r << endl;
    }
}