#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
bool isFullChan(int n)
{
    if (n < 10)
    {
        return n % 2 == 0;
    }
    else
    {
        if (n % 10 % 2 == 0)
        {
            return isFullChan(n / 10);
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    cout << isFullChan(n);
    return 0;
}