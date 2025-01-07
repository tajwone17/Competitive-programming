#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	set<int>s;
	for(int i=0;i<n;++i){
		int x;
		cin>>x;
		s.insert(x);
	}
	int count=0;

	if(s.size()==1)
		cout<<"NO"<<endl;
	else
	{
		for(auto it:s){
		count++;
		if(count==2)
		{
		cout<<it<<endl;
		break;
		}
					}
}  }