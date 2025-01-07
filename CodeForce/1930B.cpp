#include <iostream>
#include <vector>

using namespace std;

void permutation(int n, int arr[])
{
    int h = n;
    int l = 1;
    arr[0] = h;
    h--;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = h;
            h--;
        }
        else
        {
            arr[i] = l;
            l++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int p[n];
        permutation(n, p);
    }

    return 0;
}