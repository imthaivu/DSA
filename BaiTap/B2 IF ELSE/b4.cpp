#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, s;
    cin >> a >> b >> s;
    if ((s - abs(a) + abs(b)) % 2 == 0)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}