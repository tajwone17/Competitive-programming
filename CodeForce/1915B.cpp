#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int ca=0,cb=0,cc=0;
        char ls[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> ls[i][j];
                if (ls[i][j]=='A')
                ca++;
                else if(ls[i][j]=='B')
                cb++;
                else if(ls[i][j]=='c')
                cc++;

            }
        }
        if(ca<3)
        cout<<"A"<<endl;
        else if(cb<3)
        cout<<"B"<<endl;
        else
        cout<<"C"<<endl;
    }
}