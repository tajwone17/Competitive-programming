#include <bits/stdc++.h>
using namespace std;

// const int N = 1e5 + 10;
// int a[N];

int main()
{ int t;
  cin >> t;
  while (t--){
    int n;
    cin>>n;
  vector<pair<int,int>>v;
   for (int i = 0; i < n; i++)
    {
        
        int x;
        cin>>x;
        v.push_back({x,i+1});
    }           
    sort(v.begin(),v.end());
    for(int i=n-1;i>=0;i--){
      if((v[i].second)%2!=0)
        {cout<<v[i].first<<endl;
      break;
      }}
    }
}