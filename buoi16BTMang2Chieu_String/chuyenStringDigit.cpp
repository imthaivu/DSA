#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // chuyen xau thanh so
    // chuyen so thanh xau
    // cout << to_string(123);
    // cout << stoi("123");
    // neu string co rat nhieu so tinh tong cac chu so trong xau
    string soLuongChiSo = "1287394182394817293487192384732918236948129348172934169238491287364";
    int sum = 0;
    for (auto &&i : soLuongChiSo)
    {
        sum += i - '0';
    }
    cout << sum;
    return 0;
}