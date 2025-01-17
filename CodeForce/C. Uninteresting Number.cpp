#include <bits/stdc++.h>
using namespace std;
#define int long long int
// const int N = 1e5 + 10;
// const int MAX = 200'007;
// int a[MAX];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    // cin.ignore();
    while (t--)
    {
        string s;
        int c2 = 0, c3 = 0, sum = 0, flag = 0;
        cin >> s;
        for (auto i : s)
        {
            if (i == '2')
                c2++;
            else if (i == '3')
                c3++;
            int digit = i - '0';
            sum += digit;
        }
        int sum1 = sum % 9;
        for (int i = 0; i <= c2; i++)
        {
            for (int j = 0; j <= c3; j++)
            {
                int tsum = sum1;
                tsum += i * 2 + j * 6;
                if (tsum % 9 == 0)
                {
                    cout << "YES" << endl;

                    flag = 1;
                    break;
                }
            }
            if (flag)
                break;
        }
        if (!flag)
            cout << "NO" << endl;
    }
}