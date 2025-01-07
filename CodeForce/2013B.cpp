#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,sum=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
              if(i<n-1 && i<n-2)
                sum+=v[i];
        }
         
        cout<<v[n-1]-(v[n-2]-sum)<<endl;
    }
}