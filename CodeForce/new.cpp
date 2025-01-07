#include <bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        int counta=0,countb=0;
        for(int i=0;i<5;i++){
            if(s[i]=='A')
            counta++;
            else
            countb++;
        }
        if(counta>countb)
        cout<<"A"<<endl;
        else
        cout<<"B"<<endl;

    }}