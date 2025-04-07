#include <bits/stdc++.h>
using namespace std;

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define endl "\n"

bool isPerfectSquare(int x)
{
    int y = sqrtl(x);
    return y * y == x;
}

void solve()
{
    int n, cnt = 0;
    cin >> n;

    for (int i = 1; i <= n / 2; i++)
    {
        if (isPerfectSquare(i))
        {
            if (isPerfectSquare(i * 2 * 2))
                cnt += 1;
            else
                cnt += 2;
        }
    }

    cout << cnt << endl;
}

main()
{
    faster;
    solve();
    return 0;
}
