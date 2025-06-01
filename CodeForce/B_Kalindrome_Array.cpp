#include <bits/stdc++.h>
using namespace std;

#define freePalestine             \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int
#define endl "\n"
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
// const int N = 1e5 + 10;
// const int MAX = 200'007;
// int a[MAX];

// const int M=998244353;
// int mod(long long x){A
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
void tajwone17()
{
    int n;
    cin >> n;
    int k = -1, k1 = -1;
    set<int> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool flag = true;
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (a[l] == a[r])
        {
            l++;
            r--;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        yes;
        return;
    }
    flag = true;
    l = 0, r = n - 1;
    while (l < r)
    {
        if (a[l] == a[r])
        {
            l++;
            r--;
        }
        if (a[l] != a[r])
        {
            k = a[l];
            k1 = a[r];
            break;
        }
    }
    // cout << "k: " << k << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] == k)
    //         a.erase(a.begin() + i);
    // }
    // for(int i=0; i < a.size(); i++)
    // {
    //   cout << a[i] << " ";
    // }

    l = 0, r = a.size() - 1;
    while (l < r)
    {
        if (a[l] == k)
        {
            l++;
            continue;
        }

        if (a[r] == k)
        {
            r--;
            continue;
        }

        if (a[l] != k && a[r] != k)
        {
            if (a[l] == a[r])
            {
                l++;
                r--;
            }
            else
            {
                flag = false;
                break;
            }
        }
    }
    if (flag)
    {
        yes;
        return;
    }
    flag = true;
    l = 0, r = a.size() - 1;
    while (l < r)
    {
        if (a[l] == k1)
        {
            l++;
            continue;
        }
        if (a[r] == k1)
        {
            r--;
            continue;
        }
        if (a[l] != k1 && a[r] != k1)
        {
            if (a[l] == a[r])
            {
                l++;
                r--;
            }
            else
            {
                flag = false;
                break;
            }
        }
    }
    if (flag)
    {
        yes;
        return;
    }
    no;
}

int32_t main()
{
    freePalestine;
    int t;
    cin >> t;
    // cin.ignore();
    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case #"<<i<<": ";
        tajwone17();
    }
}