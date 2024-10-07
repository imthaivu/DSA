#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
void in1(ll n)
{
    if (n == 0) // neu co 1 so
    {
        return;
    }
    else
    { // in so don vi ra

        // in so hang chuc, tram...
        in1(n / 10);

        cout << n % 10 << ' ';
    }
}
void in2(ll n)
{
    if (n == 0) // neu co 1 so
    {
        return;
    }
    else
    { // in so don vi ra
        cout << n % 10 << ' ';
        // in so hang chuc, tram...
        in2(n / 10);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    in1(n);
    cout << endl;
    in2(n);

    return 0;
}