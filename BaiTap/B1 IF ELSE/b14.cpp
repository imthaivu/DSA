#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if (a % b == 0)
    {
        cout << a/b * b;
    }
    else
    {
        cout << a/b*b +b;
    }

    return 0;
}