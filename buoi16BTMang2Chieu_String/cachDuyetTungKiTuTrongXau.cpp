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
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    }
    cout << endl;
    for (auto &&i : s)
    {
        cout << i;
    }
    cout << endl;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it; // phan tu ma it tro den
    }
    cout << endl;
    // lay ki tu dau tien
    cout << s.front();
    cout << s.back();
    cout << islower('a') << endl;
    cout << isupper('F') << endl;
    cout << isalpha('a') << endl;
    cout << isdigit('4') << endl;
    cout << (char)tolower('F') << endl;
    cout << (char)toupper('f') << endl;


    return 0;
}