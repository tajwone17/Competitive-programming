#include <bits/stdc++.h>
using namespace std;
#define int long long int
int a[100005], seg[4 * 100005];
void build(int idx, int low, int high, set<int> &s)
{

    if (low == high)
    {
        s.insert(a[low]);
        seg[idx] = s.size();
        
        return;
    }
    int mid = (low + high) / 2;
    build(2 * idx + 1, low, mid, s);
    build(2 * idx + 2, mid + 1, high, s);
    seg[idx] =max(seg[2 * idx + 1], seg[2 * idx + 2]);
    
}
int query(int idx, int low, int high, int l, int r)
{
    if (l <= low && r >= high)
        return seg[idx];
    if (high < l || low > r)
        return INT_MIN;
    int mid = (low + high) / 2;
    int left = query(2 * idx + 1, low, mid, l, r);
    int right = query(2 * idx + 2, mid + 1, high, l, r);
    return max(left, right);
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t, i = 1;
    cin >> t;
    // cin.ignore();
    while (i <= t)
    {
        int n,q;
        cin >> n>> q;
      
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<int> s;
        build(0, 0, n - 1, s);
        cout << "Case " << t << ":" << endl;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << query(0, 0, n - 1, l-1, r-1) << endl;
        }
        i++;
    }
}