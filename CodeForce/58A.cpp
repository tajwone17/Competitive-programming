#include <bits/stdc++.h>
using namespace std;
#define int long long int

main()
{
    string s;
    cin >> s;
    string h = "hello";
    int count = 0;
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == h[j])
        {
            count++;
            j++;
        }
    }
    if (count == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}