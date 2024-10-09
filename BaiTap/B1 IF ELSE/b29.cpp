#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a,b;
    cin>>a>>b;
    cout << floor(b)-ceil(a)+1;
    return 0;
}