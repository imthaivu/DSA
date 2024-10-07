#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    string s; // khoi tao string t phtu
    int tuoi;
    for (int i = 0; i < t; i++)
    {
        cin.ignore(1);
        getline(cin, s);
        cin >> tuoi;
        cout << s << endl;
        cout << tuoi << endl;
    }

    return 0;
}