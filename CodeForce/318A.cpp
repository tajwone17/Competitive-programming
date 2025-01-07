#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int n, k;
    cin >> n >> k;

    int h = (n + 1) / 2;
    if (k <= h)
        cout << (2 * k) - 1 << endl;
    else
        cout << (k - h) * 2 << endl;
}