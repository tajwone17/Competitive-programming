#include <bits/stdc++.h>

using namespace std;
#define int long long int
main() {
int n,m;

cin>>n>>m;
map<string,string>mp;

for(int i=0;i<n;i++){
  string name,ip;
  cin>>name>>ip;
  mp[ip]=name;
}
for(int i=0;i<m;i++){
  string server,ip;
  cin>>server>>ip;
  ip.pop_back();
  cout<<server<<" "<<ip<<";"<<" "<<"#"<<mp[ip]<<endl;
} 
}