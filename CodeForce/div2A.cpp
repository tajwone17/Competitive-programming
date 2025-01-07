#include <bits/stdc++.h>
using namespace std;
#define int long long int


main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
 
        if ((x1 < y1 && x2 < y2) || (x1 > y1 && x2 > y2)) 
            cout << "YES" << endl;
         else 
            cout << "NO" << endl;
        
}
}