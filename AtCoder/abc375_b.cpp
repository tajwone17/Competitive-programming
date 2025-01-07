#include <bits/stdc++.h>
using namespace std;
// #define int long long int

int main()
{
  int n;
  long double t=0.0,j=0.0,k=0.0;
  cin>>n;
 for(int i=0;i<n;i++){
   long double x,y;
  cin>>x>>y;
  
    t+=sqrt(pow((x-j),2)+(pow((y-k),2)));
 j=x;
 k=y;
 }
long double ans=t+sqrt(pow(j,2)+pow(k,2));
 cout<<fixed << setprecision(20)<<ans<<endl;
}