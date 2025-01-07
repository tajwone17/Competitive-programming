#include <bits/stdc++.h>
using namespace std;

// const int N = 1e5 + 10;
// int a[N];

int main()
{ int t;
  cin >> t;
  while (t--){
  	vector<int>v(3);
  	for(int i=0;i<3;i++){
  		cin>>v[i];
  	}
  	
  	for(int i=1;i<=5;i++){
  		sort(v.begin(),v.end());
  		v[0]++;
  	}
  	cout<<v[0]*v[1]*v[2]<<endl;
  
   }
	

}