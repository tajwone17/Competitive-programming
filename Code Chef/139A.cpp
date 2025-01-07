#include <iostream>
using namespace std;
#define int long long int
main()
{
    int X, count = 0;
    cin >> X;
    for (int i = 1; i <= X; i++)
    {
        if (i % 2 != 0)
            count++;
    }
    cout << count << endl;
}