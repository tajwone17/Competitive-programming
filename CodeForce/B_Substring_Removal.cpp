#include <bits/stdc++.h>
using namespace std;
#define int long long int
// const int N = 1e5 + 10;
// const int MAX = 200'007;
// int a[MAX];

const int M = 998244353;
long long mod(long long x)
{
    return ((x % M + M) % M);
}
long long add(long long a, long long b)
{
    return mod(mod(a) + mod(b));
}
long long mul(long long a, long long b)
{
    return mod(mod(a) * mod(b));
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, left = 1, right = 1;
    bool same = true;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] != str[i + 1])
        {
            same = false;
            break;
        }
    }
    if (n == 1)
        cout << 1 << endl;
    else if (same)
    {
        int o = n;
        int t = n + 1;
        if (n % 2 == 0)
            o /= 2;
        else
            t /= 2;
        int ans = mul(o, t);
        ans = add(ans, 1);
        cout << ans << endl;
    }
    else if (str[0] == str[n - 1])
    {
        for (int i = 1; i <= n - 1; i++)
        {
            if (str[0] == str[i])
                left++;
            else
                break;
        }
        for (int i = n - 2; i >= 0; --i)
        {
            if (str[n - 1] == str[i])
                right++;
            else
                break;
        }
        int ans1 = add(left, right);
        int ans2 = mul(left, right);
        int ans = add(ans1, ans2);
        ans = add(ans, 1);
        cout << ans << endl;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (str[0] == str[i])
                left++;
            else
                break;
        }
        for (int i = n - 2; i >= 0; --i)
        {
            if (str[n - 1] == str[i])
                right++;
            else
                break;
        }
        int ans = add(left, right);
        ans = add(ans, 1);
        cout << ans << endl;
    }
}