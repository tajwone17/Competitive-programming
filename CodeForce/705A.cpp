#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int n;
    cin >> n;
    string s;
    for (int i = 1; i <= n; i++)
    {
        if (i != n && i % 2 != 0)
            s = s + "I hate that ";
        else if (i != n && i % 2 == 0)
            s = s + "I love that ";
        if (i == n && i % 2 != 0)
            s = s + "I hate it ";
        else if (i == n && i % 2 == 0)
            s = s + "I love it ";
    }
    cout << s << endl;
}