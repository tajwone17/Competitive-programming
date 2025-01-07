#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (mp[s] != 0)
            cout <<s << mp[s] << endl;
            
        else
            cout << "OK" << endl;
        mp[s]++;

            
    }
}