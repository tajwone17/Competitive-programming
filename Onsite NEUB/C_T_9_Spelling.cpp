
#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 1e5 + 10;
// int a[N];

main()
{
    int t;
    cin >> t;
    cin.ignore();
    map<char, string> mp;
    mp['a'] = "2";
    mp['b'] = "22";
    mp['c'] = "222";
    mp['d'] = "3";
    mp['e'] = "33";
    mp['f'] = "333";
    mp['g'] = "4";
    mp['h'] = "44";
    mp['i'] = "444";
    mp['j'] = "5";
    mp['k'] = "55";
    mp['l'] = "555";
    mp['m'] = "6";
    mp['n'] = "66";
    mp['o'] = "666";
    mp['p'] = "7";
    mp['q'] = "77";
    mp['r'] = "777";
    mp['s'] = "7777";
    mp['t'] = "8";
    mp['u'] = "88";
    mp['v'] = "888";
    mp['w'] = "9";
    mp['x'] = "99";
    mp['y'] = "999";
    mp['z'] = "9999";
    mp[' '] = "0";
    for (int j = 1; j <= t; ++j)
    {

        string s;
        getline(cin, s);
        int z = s.size();

        cout << "Case " << "#" << j << ": ";
        cout << mp[s[0]];
        for (int i = 1; i < z; ++i)
        {
            if (mp[s[i]][0] == mp[s[i - 1]][0])
                cout << " " << mp[s[i]];
            else
                cout << mp[s[i]];
        }
        cout << endl;
    }
}