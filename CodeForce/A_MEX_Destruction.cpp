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
        int n, flag = 0, idx, cnt = 0, flag1 = 0, flag2 = 0;
        cin >> n;
        vector<int> v(n);
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i == 0 || v[i] != v[i - 1])
            {
                a.push_back(v[i]);
            }
        }
        for (int i = 0; i < a.size(); ++i)
        {
            if (a[i] == 0 && i == 0)
            {
                flag1 = 1;
            }
            if (a[i] == 0 && i == (a.size() - 1))
            {
                flag2 = 1;
            }
            if (a[i] == 0)
                cnt++;
            if (a[i] != 0)
                flag = 1;
        }
        if (!flag)
            cout << 0 << endl;
        else if ((flag1 == 1 && cnt == 1) || (flag2 == 1 && cnt == 1) || cnt == 0)
            cout << 1 << endl;
        else if (cnt == 2 && flag1 == 1 && flag2 == 1)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
}