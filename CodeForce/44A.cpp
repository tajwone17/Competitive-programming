#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<pair<string,string>>s;
    for(int i=0;i<n;i++){
        string s1,s2;
        cin>>s1>>s2;
        s.insert({s1,s2});
    }
    cout<<s.size()<<endl;
}    