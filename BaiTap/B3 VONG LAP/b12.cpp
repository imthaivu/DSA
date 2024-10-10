#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    int cnt =0;
    while(n%10>0){
        cnt++;
        n/=10;
    }
    cout << cnt;
    return 0;
}