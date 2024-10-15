#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 10000000;
const int MOD = 1000000000 + 7;

// ham tinh to hop
ll C(int k, int n){
    if(k ==0 || k==n){
        return 1;
    } else {
        return C(k-1, n-1) + C(k, n-1);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n>>m;
    cout << C(m-1,n-1);
    return 0;
}