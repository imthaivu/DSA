#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    int m;
    cin >> m;
    int b[m];
    for (auto &&i : a)
    {
        cin >> i;
    }
    for (auto &&i : b)
    {
        cin >> i;
    }
    sort(a, a + n);
    sort(b, b + m);
    int minA = 0, minB = 0;
    int count = 0; // dem so cap
    while (minA < n && minB < m)
    {
        if (a[minA] > b[minB])
        {
            ++count; // tang 1 cap
            ++minA;
            ++minB;
        }
        else
        {
            ++minA;
        }
    }
    cout << count;
    return 0;
}