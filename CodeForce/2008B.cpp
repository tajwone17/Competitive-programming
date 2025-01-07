#include <bits/stdc++.h>
using namespace std;
// #define int long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0,flag=0,count1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0')
                count++;
            else
                count1++;
        }
        int sq=sqrt(count);

        if(sq*sq==count)
            flag=1;
        if(flag==1 && count1==((sq+1)*4))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}