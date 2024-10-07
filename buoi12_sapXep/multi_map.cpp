#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    multimap<int, int> mmp;
    mmp.insert({1, 2});
    mmp.insert({1, 3});
    mmp.insert({1, 2}); // success
    mmp.insert({1, 4});
    for (auto &&i : mmp)
    {
        cout << i.first << ' ' << i.second << endl;
    }
    mmp.erase(1); // truyen vao key
    cout << "sau khi xoa" << endl;
    for (auto &&i : mmp)
    {
        cout << i.first << ' ' << i.second << endl;
    }
    // mmp[1] = 5;//sai do no co nhieu cap 1 va value

    // ham count trong mutilmap tra ve so luong phan tu co khoa do
    // ham find tra ve phan tu dau tien
    // ham equal_range tra ve cac phan tu
    
    return 0;
}