#include <bits/stdc++.h>
using namespace std;

// const int N = 1e5 + 10;
// int a[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, ans = 0;
    cin >> n;
    unordered_map<char, int> mp;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (islower(s[i]))
            mp[s[i]]++;
        else if (isupper(s[i]))
        {
            if (mp[tolower(s[i])] == 0)

                ans++;
            else
                mp[tolower(s[i])]--;
        }
    }
    cout << ans << endl;
}
