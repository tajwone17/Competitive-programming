#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 1e5 + 10;
// int a[N];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k, res1,res2;
        cin >> x >> y >> k;
       

            res1 = (((x + k) - 1) / k) * 2 - 1;
       
       

            res2= (((y + k) - 1) / k) * 2;
        

        cout << max(res1,res2) << endl;
    }
}