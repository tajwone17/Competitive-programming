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
        if (n <= 26)
        {
            char ch = (n - 2) + 96;
            cout << "aa" << ch << endl;
        }
        else if (n == 27)
        {
            cout << "aay" << endl;
        }
        else if (n > 27 && n < 53)
        {
            char c = (n - 27) + 96;
            cout << "a" << c << "z" << endl;
        }
        else if (n >= 53)
        {
            char c = (n - 52) + 96;
            cout << c << "zz" << endl;
        }
    }
}