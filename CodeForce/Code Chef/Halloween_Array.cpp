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

        int N, L, R;
        cin >> N >> L >> R;
        vector<int> A(N);
        unordered_set<int> unique;
        bool dup = false;

        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
            if (unique.count(A[i]))
                dup = true;
            unique.insert(A[i]);
        }

        if (dup)
        {
            if (L <= 0 && 0 <= R)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            if (N > 1000 && L > 0)
            {

                cout << "NO\n";
            }
            else
            {

                int p = 1;
                for (int i = 0; i < N; ++i)
                {
                    for (int j = i + 1; j < N; ++j)
                    {
                        p *= (A[i] ^ A[j]);
                        if (p > R)
                            break;
                    }
                    if (p > R)
                        break;
                }
                if (p >= L && p <= R)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
        }
    }
    return 0;
}
