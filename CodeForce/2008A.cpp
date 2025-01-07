#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==0 && b%2!=0 ||a%2!=0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}