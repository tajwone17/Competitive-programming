#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count1, count2 = 0, flag = 0;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            string s;
            cin >> s;
            count1 = 0;
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] == '1')
                    count1++;
            }

            if (i > 1 && count1 != 0 && count2 != 0)
            {
                if (count1 != count2)
                    flag = 1;
            }
            count2 = count1;
        }
        if (flag == 1)
            cout << "TRIANGLE" << endl;
        else
            cout << "SQUARE" << endl;
    }
}