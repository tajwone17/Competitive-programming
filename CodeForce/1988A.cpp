#include <bits/stdc++.h>
using namespace std;
#define int long long int
// const int N = 1e5 + 10;
// int a[N];

main()

{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k, count = 0;
    cin >> n >> k;

    if (n == 1)
      cout << 0 << endl;
    else
    {
      while (n>1)
      {
        n = n - (k - 1);
        count++;
      }
      cout << count << endl;
    }

    
  }
}