#include <bits/stdc++.h>
using namespace std;
#define int long long int
// void binary_search(vecto<int>&v,int n){
//     int m=n/2;
//     int l=0;
//     int r=n-1;
//     while()
// }
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n,count=0;
        cin >> n;
        vector<double> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        double sum = accumulate(v.begin(), v.end(), 0);
        double avg = sum / v.size();

        if (avg < v[(n + 1) / 2])
        {
            cout << 0 << endl;
        }
        else
        {
            while (avg > v[(n + 1) / 2])
            {
                v[n - 1] = v[n - 1] + 1;
                count++;
                sum = accumulate(v.begin(), v.end(), 0);
                avg = sum / v.size();
            }
        }
        cout<<count<<endl;
    }
}