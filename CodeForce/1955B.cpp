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
       
        int n, c,d;
        cin >> n >> c>>d;
      int l=n*n;

      vector<int>v(l);
      queue<int>q;
      vector<int>v1;
        for(int i=0;i<l;i++){
            cin>>v[i];
        }
       
        sort(v.begin(),v.end());
        int mn=v[0];
        v1.push_back(mn);
        q.push(mn);
         for(int i=0;i<n-1;i++){
            mn+=d;
            v1.push_back(mn);
            q.push(mn);
         }
         for(int i=0;i<n-1;i++){
            int s=q.size();
            while(s--){
                int e=q.front();
                q.pop();
                v1.push_back(e+c);
                q.push(e+c);
            }
         }
         sort(v1.begin(),v1.end());
        

         
        if(v==v1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
}}
