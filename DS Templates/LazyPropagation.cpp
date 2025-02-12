#include <bits/stdc++.h>
using namespace std;
#define int long long int
int a[100005], seg[4 * 100005];
int lazy[4 * 100005] = {0};
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
void updateRange(int start, int end, int idx, int val, int low, int high)
{
    if (lazy[idx] != 0)
    {
        seg[idx] += lazy[idx] * (high - low + 1);
        if (low != high)
        {
            lazy[2 * idx + 1] += lazy[idx];
            lazy[2 * idx + 2] += lazy[idx];
        }
        lazy[idx] = 0;
    }
    if (start > high || low > end || low > high)
        return;
    if (start >= low && end <= high)
    {
        seg[idx] += val * (high - low + 1);
        if (low != high)
        {
            lazy[2 * idx + 1] += val;
            lazy[2 * idx + 2] += val;
        }
        return;
    }
    int mid = (low + high) / 2;
    updateRange(start, end, 2 * idx + 1, val, low, mid);
    updateRange(start, end, 2 * idx + 2, val, mid + 1, high);
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
        }
    }
}