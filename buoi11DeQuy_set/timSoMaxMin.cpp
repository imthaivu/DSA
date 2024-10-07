#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
int fmax(ll n)
{
    // neu chi con 1 so
    if (n < 10)
        return n;
    // neu co nhieu so
    else
    { // tra ve gia tri so hien tai va cac so con lai
        return max(n % 10, (ll)fmax(n / 10));
    }
}
int fmin(ll n)
{
    // neu chi con 1 so
    if (n < 10)
        return n;
    // neu co nhieu so
    else
    { // tra ve gia tri so hien tai va cac so con lai
        return min(n % 10, (ll)fmin(n / 10));
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a, b;
    cin >> a;
    cin >> b;
    return 0;
}