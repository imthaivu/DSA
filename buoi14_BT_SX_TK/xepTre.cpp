#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int x;
    cin >> x;
    int a[n];
    for (auto &&i : a)
    {
        cin >> i;
    }
    // sort
    sort(a, a + n);
    // neu [l] + [r] > x cnt++, r--
    // neu [l] + [r] < x cnt ++, l++ r--;
    int l = 0, r = n - 1;
    int count = 0;
    while (l <= r)
    {
        if (a[l] + a[r] > x)
        {
            ++count;
            --r;
        }
        else
        {
            ++count;
            --r;
            ++l;
        }
    }
    cout << count;
    // in so thuyen

    return 0;
}