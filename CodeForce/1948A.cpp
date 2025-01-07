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
        string s;
        cin >> n;
        if(n%2==1){
            cout<<"NO"<<endl;

            
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=1;i<=n/2;i++){
                if(i%2==1)
                cout<<"AA";
                else
                cout<<"BB";
                
            }
        }
        cout<<endl;

    }
}