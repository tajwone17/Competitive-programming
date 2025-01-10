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
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, vector<int>> mp2;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            mp2[v[i]].push_back(i);
        }
        int m;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            bool ok = true;
            map<char, int> vis;
            map<char, vector<int>> mp1;
            vector<int> index;
            string s;
            cin >> s;
            for (char i = 'a'; i < 'z'; i++)
            {
                vis[i] = 0;
            }
            for (int i = 0; i < s.size(); i++)
            {
                if (vis[s[i]] == 0)
                {
                    vis[s[i]] = 1;
                    index.push_back(i);
                }
            }
            if (s.size() != n)
                cout << "NO" << endl;
            else
            {
                for (int i = 0; i < n; i++)
                {

                    mp1[s[i]].push_back(i);
                }
                for (auto it : index)
                {
                    int value = v[it];
                    int valuch = s[it];
                    if (mp1[s[it]] != mp2[v[it]])
                    {
                        ok = false;
                        break;
                    }
                }
                if (ok)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
}