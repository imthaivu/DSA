#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    string ans;
    for (auto &&i : s)
    {
        if (isalpha(i))
        {
            ans += (char)toupper(i);
        }
        else
        {
            ans += i;
        }
    }
    cout << ans;

    return 0;
}