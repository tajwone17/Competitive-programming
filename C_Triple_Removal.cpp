#include <bits/stdc++.h>
using namespace std;
#define int long long

struct Node {
    long long cost;
    int rem0, rem1;
    vector<int> left0, left1, right0, right1;

    Node() {
        cost = 0;
        rem0 = rem1 = 0;
        left0.clear(); left1.clear();
        right0.clear(); right1.clear();
    }
};

int n, q;
vector<int> a;
vector<Node> seg;

Node mergeNode(const Node &L, const Node &R) {
    Node res;
    res.cost = L.cost + R.cost;

    // merge remainders
    res.rem0 = (L.rem0 + R.rem0) % 3;
    res.rem1 = (L.rem1 + R.rem1) % 3;

    // prepare boundary vectors
    res.left0 = L.left0;
    res.left1 = L.left1;
    res.right0 = R.right0;
    res.right1 = R.right1;

    // keep only first 2 and last 2 for boundaries
    for (int x : R.left0) if ((int)res.left0.size() < 2) res.left0.push_back(x);
    for (int x : R.left1) if ((int)res.left1.size() < 2) res.left1.push_back(x);
    for (int x : L.right0) if ((int)res.right0.size() < 2) res.right0.push_back(x);
    for (int x : L.right1) if ((int)res.right1.size() < 2) res.right1.push_back(x);

    // compute cross costs for 0s
    for (int x : L.right0) {
        for (int y : R.left0) {
            res.cost += min(abs(y - x), 1LL); // simplified gap cost
        }
    }
    // compute cross costs for 1s
    for (int x : L.right1) {
        for (int y : R.left1) {
            res.cost += min(abs(y - x), 1LL);
        }
    }
    return res;
}

void build(int idx, int l, int r) {
    if (l == r) {
        seg[idx] = Node();
        if (a[l] == 0) {
            seg[idx].rem0 = 1;
            seg[idx].left0.push_back(l);
            seg[idx].right0.push_back(l);
        } else {
            seg[idx].rem1 = 1;
            seg[idx].left1.push_back(l);
            seg[idx].right1.push_back(l);
        }
        return;
    }
    int mid = (l + r) / 2;
    build(2*idx+1, l, mid);
    build(2*idx+2, mid+1, r);
    seg[idx] = mergeNode(seg[2*idx+1], seg[2*idx+2]);
}

Node query(int idx, int l, int r, int ql, int qr) {
    if (ql > r || qr < l) return Node();
    if (ql <= l && r <= qr) return seg[idx];
    int mid = (l + r) / 2;
    Node L = query(2*idx+1, l, mid, ql, qr);
    Node R = query(2*idx+2, mid+1, r, ql, qr);
    return mergeNode(L, R);
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        cin >> n >> q;
        a.resize(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        seg.assign(4*n, Node());
        build(0, 0, n-1);

        while (q--) {
            int l, r;
            cin >> l >> r;
            --l; --r;
            Node ans = query(0, 0, n-1, l, r);
            if (ans.rem0 % 3 != 0 || ans.rem1 % 3 != 0) {
                cout << -1 << "\n";
            } else {
                cout << ans.cost << "\n";
            }
        }
    }
    return 0;
}
