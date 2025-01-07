#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,q;
    cin>>n>>p;
    set<int>s1;
    for(int i=0;i<p;++i){
        int x;
        cin>>x;
        s1.insert(x);
    }
    cin>>q;
    for(int i=0;i<q;++i){
        int x;
        cin>>x;
        s1.insert(x);
    }
    if(s1.size()==n)
        cout<<"I become the guy."<<endl; 
    else
        cout<<"Oh, my keyboard!" <<endl;




}