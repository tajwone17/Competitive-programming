#include <bits/stdc++.h>
using namespace std;

#define freePalestine             \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int

// const int N = 1e5 + 10;
// const int MAX = 200'007;
// int a[MAX];

// const int M=998244353;
// int mod(long long x){
//     return ((x%M + M)%M);
// }
// int add(long long a, long long b){
//     return mod(mod(a)+mod(b));
// }
// int mul(long long a, long long b){
//     return mod(mod(a)*mod(b));
// }
// int mod_pow(int base, int exp) {
//     int res = 1;
//     while (exp > 0) {
//         if (exp & 1)
//             res = (res * base) % M;
//         base = (base * base) % M;
//         exp >>= 1;
//     }
//     return res;
// }

// according to second value
bool cmp(pair<char, int> &a,
         pair<char, int> &b)
{
    return a.second < b.second;
}

// Function to sort the map according
// to value in a (key-value) pairs
void sort(map<char, int> &M)
{

    // Declare vector of pairs
    vector<pair<char, int>> A;

    // Copy key-value pair from Map
    // to vector of pairs
    for (auto &it : M)
    {
        A.push_back(it);
    }

    // Sort using comparator function
    sort(A.begin(), A.end(), cmp);
}

void compilerKande()
{
    int n;
    cin >> n;

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        int y = x - 'a';
        mp[y]++;
    }

    vector<pair<int, int>> v(mp.size());
    int i = 0;

    for (auto it : mp)
    {

        v[i].first = it.second;
        v[i].second = it.first;
        i++;
    }
    auto comp = [](pair<int, int> a, pair<int, int> b)
    {
        if(a.first==b.first)return a.second<b.second;
        return a.first>b.first;
    };
    sort(v.begin(), v.end(), comp);

    // reverse(ans.begin(), ans.end());
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     if (i != ans.size() - 1 && mp[ans[i]] == mp[ans[i + 1]])
    //     {
    //         cout << min(ans[i], ans[i + 1]) << " ";
    //         cout << max(ans[i], ans[i + 1]) << " ";
    //         i++;
    //     }
    //     else
    //         cout << ans[i] << " ";
    // }
    for (auto it : v)
    {
        char ch = it.second + 'a';
        cout << ch << " ";
    }
    cout << endl;
}

int32_t main()
{
    freePalestine;
    int t;
    cin >> t;
    // cin.ignore();
    for (int i = 1; i <= t; i++)
    {
        compilerKande();
    }
}