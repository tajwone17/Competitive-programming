#include <bits/stdc++.h>
using namespace std;

// const int N = 1e5 + 10;
// int a[N];

int main()
{ int t;
  cin >> t;
  while (t--){
    int n,flag=0;
    cin>>n;
      string s;
      cin>>s;

      
        
          for(int i=1;i<n;++i){
            if(s[0]!=s[i]){
              flag=1;
              break;
            }
          }
        
        if(flag==0 || s[0]==s[n-1]){
          cout<<"No"<<endl;
        }
        else
          cout<<"Yes"<<endl;
    }
}