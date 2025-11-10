#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

// Generates a single test case with N and energy values in range [minE, maxE]
void generateTestCase(int N, int minE, int maxE) {
    cout << N << "\n";
    for (int i = 0; i < N; i++) {
        int val = rnd.next(minE, maxE);
        cout << val << (i + 1 == N ? '\n' : ' ');
    }
}

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    if (argc < 3) {
        cerr << "Usage: ./gen <subtask> <tnum>\n";
        return 1;
    }

    int subtask = atoi(argv[1]);
    int tnum = atoi(argv[2]);

    if (subtask == 1) {  // Small N (<=1000)
        if (tnum == 1) cout << "5\n3 -4 2 -1 2\n";      // Example
        else if (tnum == 2) cout << "4\n-1 2 -2 1\n";   // Impossible
        else if (tnum == 3) cout << "1\n5\n";           // N=1
        else if (tnum == 4) cout << "1\n-5\n";          // N=1, impossible
        else {                                          // Random small
            int N = rnd.next(2, 1000);
            generateTestCase(N, -1000, 1000);
        }
    } 
    else if (subtask == 2) { // Full constraints (N up to 10^5)
        if (tnum == 1) cout << "1\n5\n";               // Edge N=1
        else if (tnum == 2) {                          // All negative
            int N = rnd.next(2, 100000);
            generateTestCase(N, -10000, -1);
        }
        else if (tnum == 3) {                          // All positive
            int N = rnd.next(2, 100000);
            generateTestCase(N, 1, 10000);
        }
        else if (tnum <= 10) {                         // Large random N
            int N = rnd.next(50000, 100000);
            generateTestCase(N, -10000, 10000);
        }
        else {                                        // Tricky case: long negatives then positives
            int N = rnd.next(1000, 100000);
            vector<int> v(N);
            for(int i = 0; i < N/2; i++) v[i] = -rnd.next(1, 10000);
            for(int i = N/2; i < N; i++) v[i] = rnd.next(1, 10000);
            cout << N << "\n";
            for(int i = 0; i < N; i++) cout << v[i] << (i+1==N?'\n':' ');
        }
    }

    return 0;
}
