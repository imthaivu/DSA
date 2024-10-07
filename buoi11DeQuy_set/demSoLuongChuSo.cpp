#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
int dem(int n)
{
    if (n < 10)
    {
        return 1;
    }
    else
    {
        return 1 + dem(n / 10);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << dem(12412342);
    return 0;
}