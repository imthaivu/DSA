#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    cout << a + b << " " << a - b << " " << (ll)a * b << " ";
    cout << fixed<<setprecision(2)<<(double)a/b;
    return 0;
}