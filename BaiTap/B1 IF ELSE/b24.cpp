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
    if(isalpha(c)){
        if(c=='z'||c=='Z'){
            cout << "a";
        } else {
            cout << (char)tolower(c+1);
        }
    } else {
        cout << "INVALID";
    }
    return 0;
}