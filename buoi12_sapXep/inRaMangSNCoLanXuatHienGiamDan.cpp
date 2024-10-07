#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
                                // cho mot mang int
                                // in ra cac phan tu trong mang theo tan suat giam dan
                                // neu cung tan suat thi in ra so nho truoc
map<int, int> mp;
bool cmp(int a, int b)
{
    if (mp[a] != mp[b])
        return mp[a] > mp[b];
    return a < b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for (auto &&i : a)
    {
        cin >> i;
    }

    for (auto &&i : a)
    {
        ++mp[i];
    }
    // inra cac phan tu
    // for (auto &&i : mp)
    // {
    //     cout << i.first << ' ' << i.second;
    // }
    // in ra giam dan
    sort(a, a + n, cmp);
    for (auto &&i : a)
    {
        cout << i << ' ';
    }
    return 0;
}