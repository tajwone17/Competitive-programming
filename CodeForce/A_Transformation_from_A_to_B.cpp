#include <bits/stdc++.h>
using namespace std;

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int
#define endl "\n"

int32_t main()
{
    faster;
    int a, b;
    cin >> a >> b;

    vector<int> v;

    while (b >= a)
    {
        v.push_back(b);

        if (b == a)
        {
            cout << "YES" << endl;
            cout << v.size() << endl;
            reverse(v.begin(), v.end());
            for (int num : v)
                cout << num << " ";
            cout << endl;
            return 0;
        }

        if (b % 10 == 1)
        {
            b /= 10;
        }
        else if (b % 2 == 0)
        {
            b /= 2;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
