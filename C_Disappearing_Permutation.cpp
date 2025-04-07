#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n), d(n);
        
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        
        for (int i = 0; i < n; i++) {
            cin >> d[i];
            d[i]--; // Convert to 0-indexed
        }

        unordered_set<int> removed;
        vector<int> result(n);
        
        for (int i = 0; i < n; i++) {
            removed.insert(p[d[i]]);
            int count = 0;

            for (int j = 0; j < n; j++) {
                if (removed.find(p[j]) == removed.end() && p[j] == j + 1) {
                    count++;
                }
            }

            result[i] = n - count;
        }

        for (int i = 0; i < n; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
