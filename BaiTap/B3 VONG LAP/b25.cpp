#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 10000000;
const int MOD = 1000000000 + 7;
long long countTrailingZeros(long long n) {
    long long count = 0;
    for (ll k = 5; k <=n; k*=5)
    {
        count += n/k;
    }
    
    return count;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
cout << countTrailingZeros(n);
    return 0;
}