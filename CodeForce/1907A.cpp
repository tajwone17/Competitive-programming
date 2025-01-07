#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        string s1 = "abcdefgh";
        string s2 = "12345678";
        for (int i = 0; i < 8; i++)
        {
            if (s[1] != s2[i])
                cout << s[0] << s2[i] << endl;
            if (s[0] != s1[i])
                cout << s1[i] << s[1] << endl;
        }
    }
}