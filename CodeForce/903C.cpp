#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
   map<int,int> mp;    
    for (int i = 0; i < n; ++i) {
    	int a;
        cin >> a;
        mp[a]++;
    }
    int max=0;
    for(auto &it:mp){
    	if(it.second>max)
    		max=it.second;
    }
    cout<<max<<endl;
}
