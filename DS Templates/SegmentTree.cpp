#include <bits/stdc++.h>
using namespace std;
#define int long long int
int a[100005], seg[4 * 100005];
void build(int idx, int low, int high)
{

    if (low == high)
    {
        seg[idx] = a[low];
        return;
    }
    int mid = (low + high) / 2;
    build(2 * idx + 1, low, mid);
    build(2 * idx + 2, mid + 1, high);
    seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
}
void updateTree(int i, int idx, int value, int low, int high)
{
    if (low == high)
    {
        seg[idx] = value;
        return;
    }
    int mid = (low + high) / 2;
    if (i <= mid)
    {
        updateTree(i, idx * 2 + 1, value, low, mid);
    }
    else
        updateTree(i, idx * 2 + 2, value, mid + 1, high);

    seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
}
int query(int idx, int low, int high, int l, int r)
{
    if (l <= low && r >= high)
        return seg[idx];
    if (high < l || low > r)
        return 0;
    int mid = (low + high) / 2;
    int left = query(2 * idx + 1, low, mid, l, r);
    int right = query(2 * idx + 2, mid + 1, high, l, r);
    return left + right;
}
main()
{
    int t;
    cin >> t;
    for (int j = 1; j <= t; j++)
    {
        cout << "Case " << j << ":" << endl;
        int n;
        cin >> n;
        int q;
        cin >> q;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        build(0, 0, n - 1);

        while (q--)
        {

            int qn;
            cin >> qn;
            if (qn == 1)
            {
                int x;
                cin >> x;
                cout << a[x] << endl;
                a[x] = 0;
                updateTree(x, 0, 0, 0, n - 1);
            }
            else if (qn == 2)
            {
                int l, r;
                cin >> l >> r;
                a[l] += r;
                updateTree(l, 0, a[l], 0, n - 1);
            }
            else
            {
                int l, r;
                cin >> l >> r;
                cout << query(0, 0, n - 1, l, r) << endl;
            }
        }
    }
}