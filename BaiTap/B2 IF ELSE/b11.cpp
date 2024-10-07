#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n, w;
    cin >> k >> n >> w;
    long s = 1ll * w * (k + 1ll * w * k) / 2;
    // cout << s;
    // cout << n;
    if (s > n)
    {
        cout << s - n;
    }
    else
    {
        cout << 0;
    }

    return 0;
}