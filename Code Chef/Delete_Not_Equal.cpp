#include <bits/stdc++.h>
using namespace std;
#define int long long int

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
        int n, flag = 0;
        cin >> n;
        string str;

        cin >> str;
        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] != str[i + 1])
            {
                flag = 1;
            }
        }
        if (!flag)
            cout << str.length() << endl;
        else
            cout << 1 << endl;
    }
}