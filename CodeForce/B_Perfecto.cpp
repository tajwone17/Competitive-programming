#include <bits/stdc++.h>
using namespace std;

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int long long


bool isPerfectSquare(long long num) {
    if(num < 0) return false;
    long long root = sqrt(num);
    return (root * root == num);
}
void solve(){
    int n;
    cin >> n;
    

    long long totalSum = (n * (n + 1)) / 2;
    if (isPerfectSquare(totalSum)) {
        cout << -1 << endl;
        return;
    }
    
    set<int> available;
    for (int i = 1; i <= n; i++) {
        available.insert(i);
    }

    long long currentPrefix = 0;
    vector<int> permutation;
    permutation.reserve(n);

 
    for (int i = 0; i < n; i++) {
        bool candidateFound = false;
       
        for (auto it = available.rbegin(); it != available.rend(); ++it) {
            int candidate = *it;
            if (!isPerfectSquare(currentPrefix + candidate)) {
                permutation.push_back(candidate);
                currentPrefix += candidate;
                available.erase(candidate);
                candidateFound = true;
                break;
            }
        }
        if (!candidateFound) break; 
    }

  
    for (int num : permutation)
        cout << num << " ";
    cout << endl;
}
int32_t main() {
    faster;

    int t;
    cin >> t;

    while(t--) {
        solve();
        
    }

    
}