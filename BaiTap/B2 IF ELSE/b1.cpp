#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b, c;
    cin >> a >> b >> c;
    double x = sqrt((a * c) / b);
    double y = sqrt((a * b) / c);
    double z = sqrt((c * b) / a);
    cout <<  (ll)(x + y + z) * 4;
    return 0;
}