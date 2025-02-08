#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX_TEMP = 200000;

int seg[4 * (MAX_TEMP + 5)], lazy[4 * (MAX_TEMP + 5)];
int prefixSum[MAX_TEMP + 5];
void build(int idx, int low, int high)
{
    if (low == high)
    {
        seg[idx] = 0;
        return;
    }
    int mid = (low + high) / 2;
    build(2 * idx + 1, low, mid);
    build(2 * idx + 2, mid + 1, high);
    seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
}

void updateRange(int idx, int low, int high, int l, int r, int val)
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

    if (low > r || high < l)
        return;

    if (low >= l && high <= r)
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
    updateRange(2 * idx + 1, low, mid, l, r, val);
    updateRange(2 * idx + 2, mid + 1, high, l, r, val);

    seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
}

int pointQuery(int idx, int low, int high, int pos)
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

    if (low == high)
        return seg[idx];

    int mid = (low + high) / 2;
    if (pos <= mid)
        return pointQuery(2 * idx + 1, low, mid, pos);
    else
        return pointQuery(2 * idx + 2, mid + 1, high, pos);
}

main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, q;
    cin >> n >> k >> q;

    for (int i = 0; i < n; i++)
    {
        int li, ri;
        cin >> li >> ri;
        updateRange(0, 1, MAX_TEMP, li, ri, 1);
    }

    for (int i = 1; i <= MAX_TEMP; i++)
    {
        int freq = pointQuery(0, 1, MAX_TEMP, i);
        prefixSum[i] = prefixSum[i - 1] + (freq >= k ? 1 : 0);
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << prefixSum[b] - prefixSum[a - 1] << endl;
    }
}
