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

        int n;
        cin>>n;

        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            if(y<0 && y!=-1)
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
    
}