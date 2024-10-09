#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, k;
    cin >> a >> b >> k;
    if(k%2==0){
        cout << (a-b)*k/2;
    } else {
        cout <<(a-b)*(k/2)+a;
    }
    return 0;
}