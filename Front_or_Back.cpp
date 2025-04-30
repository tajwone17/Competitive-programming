#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

// Precompute factorials up to 2*10^5
const int MAX = 200005;
vector<long long> fact(MAX);

void precompute_factorials() {
    fact[0] = 1;
    for (int i = 1; i < MAX; ++i)
        fact[i] = (fact[i - 1] * i) % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute_factorials();

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        bool invalid = false;
        int free_directions = 0;

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            bool front = (A[i] == i);
            bool back = (A[i] == N - i - 1);
            if (!front && !back) {
                invalid = true;
            } else if (front && back) {
                // Person can face both ways
                free_directions++;
            }
        }

        if (invalid) {
            cout << 0 << "\n";
        } else {
            // Each freely choosable direction doubles the possibilities
            long long ways = fact[N];
            for (int i = 0; i < free_directions; ++i) {
                ways = (ways * 2) % MOD;
            }
            cout << ways << "\n";
        }
    }

    return 0;
}
