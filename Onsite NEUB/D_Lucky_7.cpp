
#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 1e5 + 10;
// int a[N];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    cout<<n-1<<endl;
    for(int i=1;i<n;i++){
        if(i==n-1)
        cout<<2<<" ";
        else
        cout<<1<<" ";
    }
    cout<<endl;
}