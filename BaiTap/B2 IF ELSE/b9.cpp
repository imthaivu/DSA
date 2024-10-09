#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    int res;
    int soLanDiChuyenToiThieu = (n+1)/2;
    //so lan lon hon so lan toi thieu va phai la boi cua m
    if(soLanDiChuyenToiThieu%m==0){
        res = soLanDiChuyenToiThieu;
    } else {
        res = (soLanDiChuyenToiThieu/m+1)*m;
    }
    if(res<=n){
        cout <<res;
    } else {
        cout<<"-1";
    }
    return 0;
}