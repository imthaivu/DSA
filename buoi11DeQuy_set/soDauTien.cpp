#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
int FNum(int n)
{
    if (n < 10)
        return n;
    else
    {
        return FNum(n / 10);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << FNum(1023412);
    return 0;
}