#include <bits/stdc++.h>
using namespace std;
#define int long long int
// const int N = 1e5 + 10;
// int a[N];

main()
{ int t;
  cin >> t;
  while (t--){
  	int n,k,ans=0,count1=0;
    cin>>n>>k;
  	vector<int>v;
  	for(int i=0;i<k;i++){
  		int x;
  		cin>>x;
  		v.push_back(x);
  			
  	}
  	
  	sort(v.begin(),v.end());
  		  	
            for(int i=0;i<k-1;i++){
  		  		if(v[i]!=1){
  		  			ans=ans+((v[i]*2)-1);
  		  		}
                else
                    count1++;

  		  	}
  		  	int result=ans+count1;

            cout<<result<<endl;
  
   }
	

}