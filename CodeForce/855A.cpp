#include <bits/stdc++.h>
using namespace std;
#define int long long int
// const int N = 1e5 + 10;
// int a[N];

main()

{
	int n;
	cin>>n;
	map<string,int>mp;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		mp[s]++;
		if(mp[s]==1)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
}