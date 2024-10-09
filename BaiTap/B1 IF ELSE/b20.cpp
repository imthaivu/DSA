#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // kiem tra chu cai
    char c;
    cin >> c;
    if(isalpha(c)){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}