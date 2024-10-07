#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long n; // 8
    cin >> n;
    short cnt = 0; // 1
    while (n > 0)
    {
        cnt++;
        n /= 10;
    }
    cout << cnt;
    return 0;
}