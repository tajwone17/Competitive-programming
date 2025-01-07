#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 1e5 + 10;
// int a[N];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int flag = 0;
        string s;
        cin >> s;
        int n = s.size();

        if (flag == 0)
        {
            for (int i = 0; i < n - 1; ++i)
            {
                if (s[i] == s[i + 1])
                {
                    flag = 1;
                    cout << s[i] << s[i + 1] << endl;
                    break;
                }
            }
        }

        if (flag == 0)
        {
            for (int i = 0; i < n - 2; ++i)
            {
                set<char> st;
                st.insert(s[i]);
                st.insert(s[i + 1]);
                st.insert(s[i + 2]);
                if (st.size() == 3)
                {
                    cout << s[i] << s[i + 1] << s[i + 2] << endl;
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
            cout << -1 << endl;
    }
}