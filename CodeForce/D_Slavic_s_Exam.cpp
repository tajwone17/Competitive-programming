#include <bits/stdc++.h>
using namespace std;
#define int long long int
// const int N = 1e5 + 10;
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
        string s1, s2;
        cin >> s1 >> s2;
        int j = 0;
        for (int i = 0; i < s1.size(); ++i)
        {
            if (s1[i] == s2[j])
            {

                j++;
            }
            if (s1[i] == '?' && j < s2.size())
            {
                s1[i] = s2[j];
                j++;
            }
            if (s1[i] == '?' && j >= s2.size())
            {
                s1[i] = 'a';
            }
        }
        if (j == s2.size())
        {
            cout << "YES" << endl;
            cout << s1 << endl;
        }
        else
            cout << "NO" << endl;
    }
}