#include <bits/stdc++.h>
using namespace std;
#define int long long int
// const int N = 1e5 + 10;
// const int MAX = 200'007;
// int a[MAX];

const int M = 998244353;
int mod(int x)
{
    return ((x % M + M) % M);
}
// long long add(long long a, long long b){
//     return mod(mod(a)+mod(b));
// }
int mul(int a, int b)
{
    return mod(mod(a) * mod(b));
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k, total = 0, totalWays = 1;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> t;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x = n;
    int c = 0;
    while (1)
    {
        total += x;
        x--;
        c++;
        if (c == k)
            break;
    }
    int o = n - k;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > o)
        {
            t.push_back(i);
        }
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < t.size() - 1; i++)
    {
        totalWays = mul(totalWays, t[i + 1] - t[i]);
    }
    cout << total << " " << totalWays << endl;
}
