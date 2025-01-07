#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string cf = "codeforces";
        char c;
        int flag = 0, i = 0;
        cin >> c;

        while (cf[i] != '\0')
        {
            if (cf[i] == c)
            {
               flag = 1;
                break;
            }

            i++;
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}