#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 1e5 + 10;
// int a[N];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, p,sum=0;
        cin >> n >> k >> p;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum+=v[i];

        }
        sort(v.begin(), v.end());
        int mx = v[n - 1];
        sum=sum-mx;
        k+=mx;
        p+=sum;
        if(p<k)
        cout<<"VED"<<endl;
        else if(p>k)
        cout<<"VARUN"<<endl;
        else
        cout<<"EQUAL"<<endl;
    }
}