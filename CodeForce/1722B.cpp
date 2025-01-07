#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        string s1;
        cin >> s >> s1;
  
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s1[i] || s[i] == 'G' && s1[i] == 'B' || s[i] == 'B' && s1[i] == 'G')
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
