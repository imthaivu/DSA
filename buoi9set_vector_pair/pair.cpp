#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // mang pair
    pair<int, int> aii[100];
    for (int i = 0; i < 100; i++)
    {
        cout << aii[i].first << ' ' << aii[i].second << endl;
    }

    // gan gia tri cho pair
    cout << "gia tri pair single";
    pair<int, int> ii = {100, 200};
    cout << ii.first << ' ' << ii.second;

    // pair long nhau
    cout << "pair long nhau";
    pair<int, pair<int, int>> ipii;
    cout << ipii.first << ' ' << 'p' << ipii.second.first << ' ' << ipii.second.second;
    return 0;
}