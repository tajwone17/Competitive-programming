#include <bits/stdc++.h>
using namespace std;
#define int long long int

main()
{
  int n,count=0;
  cin>>n;
  string s;
  cin>>s;
  for(int i=1;i<n-1;i++){
  	if(s[i-1]=='#' && s[i]=='.' && s[i+1]=='#')
  		count++;
  }
  cout<<count<<endl;
}