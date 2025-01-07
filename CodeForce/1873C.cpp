#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s[10][10];
        int count = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> s[i][j];
            }
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (s[i][j] == "X")
                {
                    if (i == 0 || i == 9)
                        count = count + 1;
                    else if (i == 1 || i == 8)
                        count = count + 2;
                    else if (i == 2 || i == 7)
                        count = count + 3;
                    else if (i == 3 || i == 6)
                        count = count + 4;
                    else if (i == 4 || i == 5)
                        count = count + 5;
                }
            }
        }
        cout<<count<<endl;
    }
}