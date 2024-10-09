#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char c;
    cin>>c;
    if(islower(c)){
        cout << (char)toupper(c);
    } else {
        cout << c;
    }
    return 0;
}