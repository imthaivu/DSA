#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a, b;
    cin >> n >> a >> b;
    if (a > (double)b / 2)
    {
        if (n % 2 == 1)
        {
            cout << (double)(n - 1) * b / 2 + a;
        }
        else
        {
            cout << (double)(n / 2) * b;
        }
    }
    else
    {
        cout << n * a;
    }
    return 0;
}