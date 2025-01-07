#include <bits/stdc++.h>
using namespace std;
#define int long long int


main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
       int x,y,k;
       if(x+k<y)
        cout<<x;
        else if(x+k==y)
            cout<<1<<endl;;
        else {
            for(int i=1;i<=k;i++){
                x+=1;
             if((x+1)%y==0)
                x=1;

            }
        cout<<x<<endl;}
}
}