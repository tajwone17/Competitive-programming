#include <bits/stdc++.h>
using namespace std;

#define freePalestine             \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void tajwone17()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt1 = 0, gc = 0;
    for (auto c : s)
    {
        if (c == '0')
        {
            if (cnt1)
                gc++;
            cnt1 = 0;
        }
        else
        {
            cnt1++;
        }
    }
    if (cnt1)
        gc++;

    long long ans = (s[0] == '0' ? 1 : 2);
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            ans++;
        }
        else
        {
            ans += 2;
        }
    }

    if (gc == 1)
    {
        if (s.back() != '1')
            ans--;
    }
    else if (gc >= 2)
    {
        ans -= 2;
    }

    cout << ans << endl;
}

int main()
{
    freePalestine;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        tajwone17();
    }
}
