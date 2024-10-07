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
    cout << "nhap chuoi: ";
    cin >> s;
    cout << s << endl;
    cout << "do dai: " << s.size() << endl;
    string s2;
    cin.ignore(1); // loai bo 1 ki tu
    getline(cin, s2);
    cout << s2 << endl;
    cout << "do dai: " << s2.size() << endl;

    return 0;
}