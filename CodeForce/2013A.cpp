#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        double c=min(x,y);
        int result=ceil(n/c);
        cout<<result<<endl;
    }
}