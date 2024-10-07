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
    // dem moi ki tu xuat hien bao nhieu lan
    // map<char, int> mp;
    // for (auto &&i : s)
    // {
    //     mp[i]++;
    // }
    // for (auto &&i : mp)
    // {
    //     cout << i.first << " " << i.second;
    // }
    int dem[256] = {0}; // do co chua 255 phan tu tu phan tu 0
    for (auto &&i : s)
    {
        dem[(int)i]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (dem[i] != 0)
        {
            cout << (char)i << " " << dem[i];
        }
    }
    string t = "abc";
    s = t; // gan 2 xau cho nhau
    cout << s;
    return 0;
}