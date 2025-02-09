#include <bits/stdc++.h>
using namespace std;

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int
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

int32_t main()
{
    faster;
    int t;
    cin >> t;
    // cin.ignore();
    while (t--)
    {
        int n, d, k;

        cin >> n >> d >> k;
        vector<int> inTime[n + 3];
        vector<int> outTime[n + 3];

        for (int i = 0; i < k; i++)
        {

            int l, r;
            cin >> l >> r;

            inTime[l].push_back(i);
            outTime[r].push_back(i);
        }
        set<int> s;
        for (int i = 1; i <= d; ++i)
        {
            for (auto child : inTime[i])
            {
                s.insert(child);
            }
        }
        int sz = s.size();
        pair<int, int> brother = {sz, 1};
        pair<int, int> mother = {sz, 1};
        for (int i = d + 1; i <= n; ++i)
        {
            for (auto child : outTime[i - d])
            {
                s.erase(child);
            }
            for (auto child : inTime[i])
            {
                s.insert(child);
            }
            if (s.size() > brother.first)
            {
                brother.first = s.size();
                brother.second = i - d + 1;
            }
            if (s.size() < mother.first)
            {
                mother.first = s.size();
                mother.second = i - d + 1;
            }
        }
        cout << brother.second << " " << mother.second << endl;
    }
}