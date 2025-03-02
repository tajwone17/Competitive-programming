#include <bits/stdc++.h>
using namespace std;

#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

void solve() {
    int n;
    cin >> n;
    
    if (n < 3) {
        cout << n + 1 << endl;
        return;
    }
    
    int cnt = (n / 15) * 3; 
    int rem = n % 15;        

    if (rem >= 0) cnt++;
    if (rem >= 1) cnt++;
    if (rem >= 2) cnt++;

    cout << cnt << endl;
}

int32_t main() {
    faster;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
