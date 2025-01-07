#include <bits/stdc++.h>
using namespace std;
#define int long long int

const int MAX = 8;
int factorials[MAX + 1];

void precompute_factorials()
{
    factorials[0] = 1;
    for (int i = 1; i <= MAX; ++i)
    {
        factorials[i] = factorials[i - 1] * i;
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    precompute_factorials();

    int t;
    cin >> t;
    while (t--)
    {
        int n, d, result = 0, num = 0;
        cin >> n >> d;
        set<int> ans;
        ans.insert(1);
        if (n <= 9)
        {
            int fact = factorials[n];
            result = fact * d;
        }

        if (n <= 3 && result % 3 == 0)
        {
            ans.insert(3);
        }
        if (n > 3)
            ans.insert(3);
        if (d == 5)
            ans.insert(5);
        if (n >= 3)
            ans.insert(7);
        if (n < 3 && d == 7)
            ans.insert(7);
        if (n >= 9)
            ans.insert(9);
        if (n < 9 && result % 9 == 0)
            ans.insert(9);
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
