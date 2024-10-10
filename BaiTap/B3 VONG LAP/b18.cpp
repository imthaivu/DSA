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
    cin >> n;
    cout<<n/2<<endl;//so luong chu so nguyen to la so hang
    for (int i = 0; i < n/2-1; i++)
    {
        cout<<2 << " ";
    }
    // so cuoi cung
    if(n%2==1){
        cout<<3;
    } else {
        cout<<2;
    }
    
    return 0;
}