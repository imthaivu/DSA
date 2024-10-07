#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
bool isNT(ll n)
{
    for (int i = 2; i <= sqrt(n); i++) //=
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1; // T or F
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Your code is here
    ll n;
    cin >> n;
    int cnt = 0;
    // duyet tung so
    while (n > 0)
    {
        //neu la nguyen to
        if (isNT(n % 10)) // neu tung so cuoi cung
        {
            cnt++;
        }
        n /= 10;
    }
    cout << cnt;
    return 0;
}