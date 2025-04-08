#include <bits/stdc++.h>
using namespace std;

#define freePalestine             \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int
#define all(n) for (int i = 0; i < (n); i++)
#define sort(v) sort((v).begin(), (v).end())
#define rsort(v) sort((v).rbegin(), (v).rend())
#define endl "\n"
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
// const int N = 1e5 + 10;
// const int MAX = 200'007;
// int a[MAX];

// const int M=998244353;
// // long long mod(long long x){
// //     return ((x%M + M)%M);
// // }
// // long long add(long long a, long long b){
// //     return mod(mod(a)+mod(b));
// // }
// long long mul(long long a, long long b){
//     return mod(mod(a)*mod(b));
// }
void tajwone17()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        cin >> v[i].second;
    }
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i].first > v[i + 1].first || v[i].second > v[i + 1].second)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "no" << endl;
    }
    else
    {
        cout << "yes" << endl;
    }
}

main()
{
    freePalestine;

    tajwone17();
}