#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        if (n < 5)
            cout << -1;
        else
        {

            for (int i = 1; i <= n; ++i)
            {
                if (i % 2 != 0 && i != 5)
                    cout << i << " ";
                else if (i != 4 && i % 2 == 0)
                {
                    int x = i;
                    v.push_back(i);
                }
            }
            cout << 5 << " " << 4 << " ";
            for (int i = 0; i < v.size(); ++i)
            {
                cout << v[i] << " ";
            }
        }
        cout << endl;
    }
}
