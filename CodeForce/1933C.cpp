#include <bits/stdc++.h>
using namespace std;
#define int long long int

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, l, count = 0;
        cin >> a >> b >> l;

        for (int i = 0; i <= l; i++)
        {
            for (int j = 0; j <= i; i++)
            {
                int t=k%(pow(a,i)*(pow(b,j)));
                if(t==0)
                count++;
            }
        }

        cout << count << endl;
    }
}