#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    //ep kieu double -> long long
    ll res = (ll)pow(n,3) + (ll)3*pow(n,2) + n + 1;
    cout << res;
    return 0;
}