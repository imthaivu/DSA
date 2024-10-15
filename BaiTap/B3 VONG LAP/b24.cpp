#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 10000000;
const int MOD = 1000000000 + 7;
ll C(int k, int n){
    //diem dung
    if(k==0 || k == n){
        return 1;
    } else {
        return C(k-1,n-1) + C(k,n-1);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n>>m;
    cout << C(n-1, n+m-1);
    return 0;
}