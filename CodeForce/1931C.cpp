
#include <bits/stdc++.h>
using namespace std;
#define int long long int

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int front = 1, back = 1;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int i = 0;
        int j = n - 1;

        while (v[i] == v[i + 1])
        {
            front++;
            i++;
        }

        while (v[j] == v[j - 1])
        {
            back++;
            j--;
        }
        int maxi = max(back, front);
        if (v[0] == v[n - 1])
        {
            if (n == front)
                cout << 0 << endl;
            else
                cout << n - (front + back) << endl;
        }
        else if (v[0] != v[n - 1])
        {
            cout << n - maxi << endl;
        }
    }
}