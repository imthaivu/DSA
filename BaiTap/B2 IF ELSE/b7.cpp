#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s;
    cin >> n >> s;
    int dem = 0;
    while (n<s)
    {
        dem+=s/n;
        s%=n;
    }
    if(s != 0){
        dem+=1;
    }
    cout << dem;
    return 0;
}