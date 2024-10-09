#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, s;
    cin >> x >> y >> s;
    int res = s-abs(x)-abs(y);
    if(res>=0 && res%2==0){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}