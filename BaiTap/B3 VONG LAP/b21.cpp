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
    int soNgayNghi = n/7*2;
    int remain = n%7;
    int remainMin =0;
    int remainMax = 2; 
    if(remain == 1){
        remainMax  =1;
    } else if(remain == 6){
        remainMin = 1;
    } 
    // neu chia het
    if(remain==0){
        cout << soNgayNghi << " " << soNgayNghi;
    } else {
        cout << soNgayNghi + remainMin << " " << soNgayNghi + remainMax;
    }
   

    return 0;
}