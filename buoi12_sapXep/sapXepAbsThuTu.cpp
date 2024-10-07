#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (abs(a.first) != abs(b.first))
        return abs(a.first) < abs(b.first);
    return a.second < b.second;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    // sap xep
    sort(a, a + n, cmp);
    for (auto &&i : a)
    {
        cout << i.first << ' ';
    }

    return 0;
}