#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
void convert(ll n)
{
    if (n == 0)
    {
        return;
    }
    convert(n / 2);
    cout << n % 2;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    convert(123123412);
    return 0;
}