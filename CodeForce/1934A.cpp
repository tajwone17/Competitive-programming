// ***Bismillahir Rahmanir Rahim***//
// Save Palestine
// Free Palestine

#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int r=abs(v[n-1]-v[0])+abs(v[n-1]-v[1])+abs(v[1]-v[2])+abs(v[1]-v[3]);
        cout<<r<<endl;

    }
}