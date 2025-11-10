#include <bits/stdc++.h>
using namespace std;

#define freePalestine             \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int
#define endl "\n"
#define technologia return 0

void tajwone17()
{
    int n, q;
    cin >> n >> q;
    string str;
    cin >> str;

    int aa = 0;
    for (int i = 0; i < n; i++)
        if (str[i] == 'A')
            aa++;

    while (q--)
    {
        int a;
        cin >> a;
        int count = 0;

        if (aa == n)
        {
            cout << a << endl;
            continue;
        }

        while (a > 0)
        {
            for (int i = 0; i < n && a > 0; i++)
            {
                if (str[i] == 'A')
                    a--;
                else
                    a /= 2;
                count++;
            }
        }

        cout << count << endl;
    }
}

int32_t main()
{
    freePalestine;
    int t;
    cin >> t;
    while (t--)
        tajwone17();
    technologia;
}
