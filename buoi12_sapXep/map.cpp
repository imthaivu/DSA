#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
// map: anh xa, co thu tu theo key
// ma sinh vien
//+ la duy nhat
//+ key value
//
// cac ham co san
// insert
//
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // khai bao
    map<int, int> mp;
    // insert
    mp.insert({1, 2}); // success
    mp.insert({1, 3}); // failed
    cout << "size " << mp.size() << endl;
    mp[2] = 4; // insert success
    cout << "size sau khi them 1 cai success " << mp.size() << endl;
    cout << "map cua 1 la " << mp[1] << endl;
    map<string, string> mpDiaChi;
    mpDiaChi["usa"] = "hoaKy";
    cout << "dia chi";
    cout << mpDiaChi["usa"] << endl;
    ++mp[3]; // thay doi gia tri value
    // neu mp[1] chua co gia tri thi mp[1] = 1;
    // neu mp[1] co gia tri roi thi value tang
    cout << mp[3];
    cout << ++mp[3] << endl;
    cout << "cac phan tu trong map 1" << endl;
    for (auto i : mp)
    {
        cout << i.second;
    }
    cout << endl
         << "cac phan tu mp 2" << endl;
    for (auto &&i : mpDiaChi)
    {
        cout << i.second;
    }
    // ieterator
    cout << "iterator" << endl;
    for (auto &&it = mp.begin(); it != mp.end(); ++it)
    {
        cout << (*it).first << ' ' << (*it).second << endl;
    }
    // cach thu 2
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << ' ' << it->second << endl;
    }
    for (auto &&i : mp)
    {
        int key = i.first;
        int value = i.second;
        cout << key << ' ' << value << endl;
    }
    // find key co the trung value
    cout << mpDiaChi.find("usa")->first << ' ' << mpDiaChi.find("usa")->second << endl;
    // or
    auto itUsa = mpDiaChi.find("usa");
    cout << itUsa->first << ' ' << itUsa->second << endl;
    mpDiaChi.erase(itUsa); // mpDiaChi.erase("usa");
    cout << "count: ";
    cout << mp.count(1); // tra ve co(1) hoac khong(0) co phan tu do
    // ham find tra ve phan tu trung key
    // khi xoa key khong ton tai se bi TLE

    return 0;
}