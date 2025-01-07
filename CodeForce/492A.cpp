#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int h = 0;
    int count = 0;
    while (n >= count)
    {
        h++;
        count = count + (h * (h + 1)) / 2;
    }
    cout << h - 1<<endl;
}