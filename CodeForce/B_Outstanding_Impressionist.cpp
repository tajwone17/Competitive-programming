#include <bits/stdc++.h>
using namespace std;
#define int long long int
// const int N = 1e5 + 10;
// const int MAX = 200'007;
// int a[MAX];

main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  // cin.ignore();
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> prefix(2 * n + 1, 0);
    string ans = "";
    vector<int> cnt(2 * n + 1, 0);
    vector<int> v(n);
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
      int x, y;
      cin >> x >> y;
      v[i] = x;
      v1[i] = y;

      if (x == y)
      {
        cnt[x]++;
        prefix[x] = 1;
      }
    }

    for (int i = 1; i < prefix.size(); ++i)
    {
      prefix[i] += prefix[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
      if (v[i] == v1[i])
      {
        if (cnt[v[i]] > 1)
          ans += '0';
        else
          ans += '1';
      }
      else
      {
        if (prefix[v1[i]] - prefix[v[i] - 1] <= v1[i] - v[i])
          ans += '1';
        else
          ans += '0';
      }
    }
    cout << ans << endl;
  }
}