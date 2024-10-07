#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double d = 0.3*3 + 0.1;
    double d2 = 1;
    if(abs(d-d2) < 1e-9){
        cout << "hai so = nhau";
    } else {
        cout << "hai so != nhau";
    }
    return 0;
}