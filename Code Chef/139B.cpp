#include <iostream>
using namespace std;
#define int long long int
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, M;
        cin >> N >> M;

    
        if (N > M)
            cout << N - M << endl;
        else
        {
            int k = M % N;
            int j = M / N;
            int z = ((j * N) + N)%M;
            cout << min(k, z) << endl;
        
    }}
}