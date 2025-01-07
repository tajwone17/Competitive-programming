#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        int count = 0;
        string s = "codeforces";
        for (int i = 0; i < 10; i++)
        {
            if (str[i] != s[i])
                count++;
        }
        cout << count << endl;
    }
}