#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    unordered_map<int, int> ump;
    ump.insert({1, 2});
    ump.insert({1, 3});
    ump.insert({1, 2});
    ump.insert({1, 4});
    // in cac phan tu
    for (auto &&i : ump)
    {
        cout << i.first << ' ' << i.second << endl;
    }

    return 0;
}