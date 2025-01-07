#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e, f, g, h;
        cin >> a >> b >> c >> d >> e >> f >> g >> h;
        int max = std::max({a, c, e, g});
        int min = std::min({a, c, e, g});

        int r = max - min;
        cout << r * r << endl;
    }
}