#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string name = "Timur";
        sort(name.begin(), name.end());
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        if (name == s)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}