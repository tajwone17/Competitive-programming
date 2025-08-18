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
    vector<int> a(n);
    int cnt0 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            cnt0++;
    }

    int sum = accumulate(a.begin(), a.end(), 0);
    cout << sum + cnt0 << endl;
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
