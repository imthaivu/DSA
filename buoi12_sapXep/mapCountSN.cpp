#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
// dung khi dem 1e18
// dung khi dem NlogN
// du lieu dep dung mang dem khi du lieu dep
// dung 2 dong for khi
// dung map khi

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<ll, int> mp;
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) // n
    {
        cin >> a[i];
        ++mp[a[i]]; // log n
    } // n log n
    // in key value theo thu tu key
    for (auto &&i : mp)
    {
        cout << i.first << ' ' << i.second << endl;
    }
    // in key value theo thu tu trong mang
    for (int i = 0; i < n; i++)
    {
        // neu chua co
        if (mp[a[i]] != 0)
        {
            cout << a[i] << " " << mp[a[i]] << endl;
            mp[a[i]] = 0;
        }
    }
    

    return 0;
}