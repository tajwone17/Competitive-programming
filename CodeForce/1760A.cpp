#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b && a<c)
        cout<<a<<endl;
        else if(b>a && b<c)
        cout<<b<<endl;
        else
        cout<<c<<endl;
    }}