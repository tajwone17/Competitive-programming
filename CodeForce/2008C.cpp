#include <bits/stdc++.h>
using namespace std;
// #define int long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l,r,count=0;
        cin>>l>>r;
        int i=1;
        while(l<=r){
            l=l+i;
            i++;
            count++;
        }
     cout<<count<<endl;
    }
}