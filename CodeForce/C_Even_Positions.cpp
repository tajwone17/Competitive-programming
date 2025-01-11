#include <bits/stdc++.h>
using namespace std;
#define int long long int
// const int N = 1e5 + 10;
// const int MAX = 200'007;
// int a[MAX];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    // cin.ignore();
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        stack<char> st;

        for (int i = 0; i < str.size(); ++i)
        {
            if (str[i] == '(' || str[i] == ')')
                st.push(str[i]);

            else if (str[i] == '_')
            {
                if (!st.empty())
                {
                    if (st.top() == ')')
                        str[i] = '(';
                    else if (st.top() == '(')
                        str[i] = ')';
                    st.pop();
                }
                else
                {
                    str[i] = '(';
                    st.push(str[i]);
                }
            }
        }
        int count = 0, count1 = 0;

        for (int i = 0; i < str.size(); ++i)
        {
            if (str[i] == '(')
                count += i + 1;
            else
                count1 += i + 1;
        }
        cout << count1 - count << endl;
    }
}