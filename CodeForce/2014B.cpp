#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k,sum;
       cin>>n>>k;
    
       int z=(n-k);
       
       sum=(n*(n+1))/2-(z*(z+1))/2;

              if(sum%2==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    }
}