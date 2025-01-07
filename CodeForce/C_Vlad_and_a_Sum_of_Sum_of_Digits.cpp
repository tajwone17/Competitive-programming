#include <bits/stdc++.h>
using namespace std;
#define int long long int
// const int N = 1e5 + 10;
const int MAX = 200'007;
int a[MAX];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    a[0] = 0;
    for (int i = 1; i < MAX; i++)
    {
        int x = i;
        int sum = 0;
        while (x)
        {
            sum += (x % 10);
            x = x / 10;
        }
        a[i] = a[i - 1] + sum;
    }
    while (t--)
    {
        int n;
        cin >> n;
        cout << a[n] << endl;
    }
}