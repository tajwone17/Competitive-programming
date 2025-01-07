#include <bits/stdc++.h>
using namespace std;
#define int long long int

main()
{
    int n, cnt = 0;
    cin >> n;
    vector<int> v(n);
    map<int, int> freq;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
    }
    while (freq[1] > 0 && freq[3] > 0 && freq[6] > 0)
    {
        ans.push_back(1);
        ans.push_back(3);
        ans.push_back(6);
        freq[1]--;
        freq[3]--;
        freq[6]--;
        cnt++;
    }
    while (freq[1] > 0 && freq[2] > 0 && freq[6] > 0)
    {
        ans.push_back(1);
        ans.push_back(2);
        ans.push_back(6);
        freq[1]--;
        freq[2]--;
        freq[6]--;
        cnt++;
    }
    while (freq[1] > 0 && freq[2] > 0 && freq[4] > 0)
    {
        ans.push_back(1);
        ans.push_back(2);
        ans.push_back(4);
        freq[1]--;
        freq[2]--;
        freq[4]--;
        cnt++;
    }
    if (cnt != (n / 3))
        cout << -1 << endl;
    else
    {
        for (int i = 0; i < ans.size() - 2; i += 3)
        {
            cout << ans[i] << " " << ans[i + 1] << " " << ans[i + 2] << endl;
        }
    }
}