#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;
    int l, r;
    if (n % 2 == 0)
    {
        l = n / 2;
    }
    else
    {
        l = n / 2 + 1;
    }
    r = n;
    int res = (l + m - 1) / m * m;
    if (res <= r)
        cout << res;
    else
        cout << -1;
    return 0;
}