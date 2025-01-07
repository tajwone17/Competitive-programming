#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, x, y, z;
        cin >> n >> x >> y >> z;

        long long s = x + y + z;
        long long c = n / s;
        long long r = n % s;

        if (r == 0) {
            cout << c * 3 << endl;
        } else {
            int d = 0;
            if (r > 0) {
                d++;
                r -= x;
            }
            if (r > 0) {
                d++;
                r -= y;
            }
            if (r > 0) {
                d++;
                r -= z;
            }
            cout << c * 3 + d << endl;
        }
    }

    return 0;
}
