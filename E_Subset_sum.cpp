#include <bits/stdc++.h>
using namespace std;

#define freePalestine ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"
#define technologia return 0

set<int> s;
vector<unordered_set<int>> memo;

void subSetSum(int idx, int sum, vector<int> &a, int n)
{
    if (idx == n)
    {
        if (sum > 0) s.insert(sum);
        return;
    }

    
    if (memo[idx].count(sum)) return;
    memo[idx].insert(sum);


    subSetSum(idx + 1, sum + a[idx], a, n);

    
    subSetSum(idx + 1, sum, a, n);
}

void tajwone17()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    s.clear();
    memo.assign(n + 1, unordered_set<int>());

    subSetSum(0, 0, a, n);

    int ans = 0;
    for (int x : s) ans += x;
    cout << ans << endl;
}

int32_t main()
{
    freePalestine;
    int t;
    cin >> t;
    while (t--)
    {
        tajwone17();
    }
    technologia;
}
