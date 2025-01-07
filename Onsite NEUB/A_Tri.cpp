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
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c)

        cout << a << '+' << b << '=' << c << endl;
    else if ((a - b) == c)
        cout << a << '-' << b << '=' << c << endl;
    else if ((a * b) == c)
        cout << a << '*' << b << '=' << c << endl;
    else if ((a / b) == c && a % b == 0)
        cout << a << '/' << b << '=' << c << endl;
    else if ((b + c) == a)
        cout << a << '=' << b << '+' << c << endl;
    else if ((b - c) == a)
        cout << a << '=' << b << '-' << c << endl;
    else if ((b * c) == a)
        cout << a << '=' << b << '*' << c << endl;
    else if ((b / c) == a && b % c == 0)
        cout << a << '=' << b << '/' << c << endl;
}