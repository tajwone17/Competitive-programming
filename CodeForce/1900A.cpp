#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, count = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                count++;
            }
            if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
            {
                count = 2;
                break;
            }
        }
        cout << count << endl;
    }
}