#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 1e5 + 10;
int a[N];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int ans=0;
        vector<int>v(3);
        for(int i=0;i<3;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<2;i++){
            int t=abs(v[i]-v[i+1]);
            ans+=t;
        }
        cout<<ans<<endl;

    }
}