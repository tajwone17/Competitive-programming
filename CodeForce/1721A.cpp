#include <bits/stdc++.h>
using namespace std;
#define int long long int
 main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1;
        string s2;
        cin >> s1 >> s2;
        string s = s1 + s2;
        cout << set<char>(s.begin(), s.end()).size() - 1 << endl;
    }
}