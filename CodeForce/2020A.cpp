#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n,k,r=0;
        cin>>n>>k;
      
      

        if(k==1)
            cout<<n<<endl;
        else{
            while(n!=0){
                r+=n%k;
                n=n/k;
            }
             cout<<r<<endl;
        } 
       
    }
}