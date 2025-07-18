#include <bits/stdc++.h>
using namespace std;

#define freePalestine             \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int
#define endl "\n"
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define technologia return 0

void tajwone17()
{
    int n;
    cin >> n;
    int len = n * (n - 1) / 2;
    vector<int> a(len);
    for (int i = 0; i < len; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int i = 0;

    for (int x = n - 1; x > 0; x--)
    {
        cout << a[i] << " ";
        i += x;
    }
    cout << 1000000000 << endl;
}

int32_t main()
{
    freePalestine;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        tajwone17();
    }
    technologia;
}
