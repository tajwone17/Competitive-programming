#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int sum=0,count=0;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];

            if(a[i]>=k)
               {
                 sum+=a[i];

               } 
               else if(a[i]==0 && sum!=0){
                count++;
                sum--;

               }
        }
        cout<<count<<endl;
    }
}