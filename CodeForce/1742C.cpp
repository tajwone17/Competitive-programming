#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int rc = 0;
      
        int flag=0;
        char s[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> s[i][j];
            }
        }
        for (int i = 0; i < 8; i++)
        {
            rc=0;
            for (int j = 0; j < 8; j++)
            {

                if (s[i][j] == 'R')
                    rc++;
                    if(rc==8)
                   { flag=1;
                    break;
                   }
            }
        }
        if (flag==1)
            cout << "R" << endl;

        else
            cout << "B" << endl;
    }
}