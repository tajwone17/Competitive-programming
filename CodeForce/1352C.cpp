#include<bits\stdc++.h>
using namespace std;
#define int long long int 
main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int r=(k+(k/(n-1)));
        if(k<n)
        cout<<k<<endl;
        else{
            if(r%n==0)
            cout<<r-1<<endl;
            else
            cout<<r<<endl;
        }
    }
}