#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<int> A(N), B(N);
        unordered_map<int, int> freqA;

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            freqA[A[i]]++;
        }
        for (int i = 0; i < N; ++i) {
            cin >> B[i];
        }

        long long ways = 0;

        for (int j = 0; j < N; ++j) {
            int target = M * B[j];
            if (target == 0) continue; // If target is 0, skip as we cannot distribute sweets

            for (int i = 0; i < N; ++i) {
                if (A[i] <= target - B[j]) {
                    ways += freqA[target - B[j]];
                }
            }
        }

        cout << ways << endl;
    }

    return 0;
}
