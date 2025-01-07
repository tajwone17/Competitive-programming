#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, score = 0, score1 = 0, p = 1;
        for (int i = 1; i <= 22; i++)
        {
            cin >> a >> b;
            score = a + (b * 20);

            if (score1 < score)
            {
                score1 = score;
                p = i;
            }
        }
        cout<<p<<endl;
    }
}
