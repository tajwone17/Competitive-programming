#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        int pc=0,mc=0;
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
           if(s[i]=='+')
           pc++;
           else
           mc--;
        }
        int res=abs(pc-mc);
        cout<<res<<endl;
    }
}