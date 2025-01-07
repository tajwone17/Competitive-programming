#include <bits/stdc++.h>
using namespace std;
#define int long long int
int flag=0;
bool dfs(int n,int m){
	if(n==m)
		return true;
	if(n%3!=0)
		return false;
	int i=n/3;
	int j=(2*n)/3;
	
	return dfs(i,m) || dfs(j,m);
	
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
    	
    		if(dfs(n,m)==1)
    			cout<<"YES"<<endl;
    		else
    			cout<<"NO"<<endl;
    	
    }
}