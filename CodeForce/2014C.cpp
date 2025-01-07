#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 1e5 + 10;

// int a[N];

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        int sum = 0;
        cin >> num;
        vector<int> vec(num);

        for (int i = 0; i < num; i++)
        {
            cin >> vec[i];
            sum += vec[i];
        }

        if (num == 1 || num == 2)
            cout << -1 << endl;
        else
        {
            int l = 0, r = 1e18;

            int ans = -1;
            int need = num / 2;
            while (l <= r)
            {
                int mid = (r + l) / 2;
                int avg = (sum + mid + (num - 1)) / num;
                int half = (avg + 1) / 2;
                int cnt = 0;
                for (int i = 0; i < num; ++i)
                {
                    if (vec[i] < half)
                        cnt++;
                }
                if (need < cnt)
                {
                    ans = mid;
                    r = mid - 1;
                }

                else
                    l = mid + 1;
            }
            cout << ans << endl;
        }
    }
}
