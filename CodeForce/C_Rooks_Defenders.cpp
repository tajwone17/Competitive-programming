#include <bits/stdc++.h>
using namespace std;

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int

const int MAXN = 100005;
int seg[4 * MAXN], seg1[4 * MAXN];
map<int, int> r, c;

void build(int idx, int low, int high, int seg[])
{
    if (low == high)
    {
        seg[idx] = 0;
        return;
    }
    int mid = (low + high) / 2;
    build(2 * idx + 1, low, mid, seg);
    build(2 * idx + 2, mid + 1, high, seg);
    seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
}

void updateTree(int i, int idx, int value, int low, int high, int seg[])
{
    if (low == high)
    {
        seg[idx] = value;
        return;
    }
    int mid = (low + high) / 2;
    if (i <= mid)
        updateTree(i, 2 * idx + 1, value, low, mid, seg);
    else
        updateTree(i, 2 * idx + 2, value, mid + 1, high, seg);

    seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
}

int query(int idx, int low, int high, int l, int r, int seg[])
{
    if (l > high || r < low)
        return 0;
    if (l <= low && high <= r)
        return seg[idx];

    int mid = (low + high) / 2;
    int left = query(2 * idx + 1, low, mid, l, r, seg);
    int right = query(2 * idx + 2, mid + 1, high, l, r, seg);

    return left + right;
}

int32_t main()
{
    faster;
    int n, q;
    cin >> n >> q;

    build(0, 0, n - 1, seg);
    build(0, 0, n - 1, seg1);

    while (q--)
    {
        int t;
        cin >> t;

        if (t == 1)
        {
            int l1, r1;
            cin >> l1 >> r1;
            l1--, r1--;

            r[l1]++;
            c[r1]++;

            if (r[l1] == 1)
                updateTree(l1, 0, 1, 0, n - 1, seg);
            if (c[r1] == 1)
                updateTree(r1, 0, 1, 0, n - 1, seg1);
        }
        else if (t == 2)
        {
            int l1, r1;
            cin >> l1 >> r1;
            l1--, r1--;

            r[l1]--;
            c[r1]--;

            if (r[l1] == 0)
                updateTree(l1, 0, 0, 0, n - 1, seg);
            if (c[r1] == 0)
                updateTree(r1, 0, 0, 0, n - 1, seg1);
        }
        else if (t == 3)
        {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            x1--, y1--, x2--, y2--;

            int rowCount = query(0, 0, n - 1, x1, x2, seg);
            int colCount = query(0, 0, n - 1, y1, y2, seg1);

            if (rowCount == (x2 - x1 + 1) || colCount == (y2 - y1 + 1))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}
