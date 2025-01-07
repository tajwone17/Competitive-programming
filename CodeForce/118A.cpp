
#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    string s;
    cin >> s;
    vector<char> ans;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'||s[i] == 'Y'||s[i] == 'y')
            continue;
        else
        {
            char s = '.';
            ans.push_back(s);
        }
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||s[i] == 'Y'||s[i] == 'y')
            continue;
        else
        {

            char c = tolower(s[i]);
            ans.push_back(c);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
}