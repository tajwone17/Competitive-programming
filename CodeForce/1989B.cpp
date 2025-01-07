#include <bits/stdc++.h>
using namespace std;
#define int long long int
main() {
  int t;
  cin >> t;
  while (t--) {
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size(),count=0;
    int ans = n + m;
    for (int i = 0; i < m; ++i) {
      int j = i;
      count=0;
      for (int k=0;k<n;k++) 
      {
        if (j < m && a[k] == b[j]){
          ++j;
          ++count;
        } 
      }
      ans = min(ans, n +(m - count) );
    }
    cout << ans << endl;
  }
}