#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> energy(n);
    for (int i = 0; i < n; i++)
        cin >> energy[i];

    long long total = 0, current = 0;
    int start = 0;

    for (int i = 0; i < n; i++)
    {
        total += energy[i];
        current += energy[i];
        if (current < 0)
        {
            current = 0;
            start = i + 1;
        }
    }

    if (total < 0)
        cout << -1 << endl;
    else
        cout << (start % n) + 1 << endl;

    
}
