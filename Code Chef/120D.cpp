#include <iostream>
using namespace std;
#define int long long int
int sswap(int x,int y){

        cin >> x >> y;
        while (x != 0)
        {
            if (x > y)
                swap(x, y);
            else
            {
               int k = x;
                x = y - x;
                y=k;
            }
        }
        return y;
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        
       int res=sswap(x,y);
       cout<<res<<endl;
    }
}