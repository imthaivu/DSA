#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b,c;
    cin>>a>>b>>c;
    cout << a*((ll)b+c)+b*((ll)a+c);
    return 0;
}