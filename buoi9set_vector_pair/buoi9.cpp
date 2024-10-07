#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // tron 2 mang da duoc sap xep
    int n, m;
    cin >> n >> m;
    int a[n];
    int b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            cout << a[i] << ' ';
            ++i;
        }
        else
        {
            cout << b[j] << ' ';
            ++j;
        }
    }
    while (i < n)
    {
        cout << a[i] << ' ';
        ++i;
    }
    while (j < m)
    {
        cout << b[j] << ' ';
        ++j;
    }
    return 0;
}