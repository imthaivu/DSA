#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // sap xep mang
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n); // tang dan NlogN
    for (auto &&i : a)
    {
        cout << i;
    }
    cout << endl;
    sort(a, a + n, greater<int>()); // giam dan
    for (auto &&i : a)
    {
        cout << i;
    }
    cout << endl;

    // sap xep vector
    vector<int> b;
    for (auto &&i : b)
    {
        cin >> i;
    }
    sort(b.begin(), b.end());
    for (auto &&i : b)
    {
        cout << i;
    }
    cout << endl;

    sort(b.begin(), b.end(), greater<int>());
    for (auto &&i : b)
    {
        cout << i;
    }
    return 0;
}