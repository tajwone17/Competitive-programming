#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int n, flag = 0, cntl = 0, cnto = 0, cntL = 0, cntO = 0, ans = -1;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n - 1; i++)
    {
        cntL = 0;
        cntO = 0;
        if (s[i] == 'O')
            cnto++;
        else
            cntl++;
        for (int j = i + 1; j < n; j++)
        {
            if (s[j] == 'O')
                cntO++;
            else
                cntL++;
            if (flag)
                break;
        }

        if (cnto != cntO && cntl != cntL)
        {
            ans = i + 1;
            flag = 1;
            break;
        }
    }
    cout << ans << endl;
}