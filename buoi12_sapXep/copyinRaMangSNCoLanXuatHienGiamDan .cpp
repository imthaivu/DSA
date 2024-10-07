#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
                                // cho mot mang int
                                // in ra cac phan tu trong mang theo tan suat giam dan
                                // neu cung tan suat thi in ra so nho truoc
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second) // neu khac nhau tan suat
        return a.second > b.second;
    return a.first < b.first;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    map<int, int> mp; // cs, tan suat
    // cho gia tri vao mang va map
    for (auto &&i : a)
    {
        cin >> i;
        ++mp[i];
    }
    vector<pair<int, int>> v; // cs, tan suat
    // mp cho vao vector ?
    for (auto i : mp)
    {
        v.push_back(i);
    }
    sort(begin(v), end(v), cmp);
    // inra cac phan tu
    for (auto &&i : v)
    {
        for (int j = 0; j < i.second; j++)

        {
            cout << i.first << ' ';
        }
    }

    return 0;
}