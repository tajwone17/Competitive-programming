#include <bits/stdc++.h>
using namespace std;

// const int N = 1e5 + 10;
// int a[N];

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {

      cin >> v[i];
    }

    sort(v.begin(), v.end());
    int r = (n / 2);
    cout << v[r] << endl;
  }
}
