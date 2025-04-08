#include <bits/stdc++.h>
using namespace std;

#define freePalestine             \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int
#define endl "\n"

void tajwone17()
{
    string s;
    cin >> s;
    int cnt = 0;
    int j = s.size() - 1;


    while (j >= 0 && s[j] == '0') {
        cnt++;
        j--;
    }

 
    for (int i = 0; i < j; i++) {
        if (s[i] != '0') cnt++;
    }

    cout << cnt << endl;
}

 main()
{
    freePalestine;
    int t;
    cin >> t;
    while (t--) {
        tajwone17();
    }
    
}
