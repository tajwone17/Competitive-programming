#include <bits/stdc++.h>
using namespace std;
#define int long long int

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, r;
        cin >> s >> r;

        int j = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i + 1 < s.size() && s[i] != s[i + 1])
            {
                s[i] = r[j];
                s.erase(i + 1, 1);
                j++;
                if (i >= 1)
                    i -= 2;
                else
                    i--;
            }
            if (i >= s.size())
                break;
        }

        if (s.size() == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
