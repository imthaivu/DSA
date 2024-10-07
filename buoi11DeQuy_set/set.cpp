#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
// set
// unorderset
// multiset

// ham insert() O(log(n))

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> se;
    se.insert(3);

    se.insert(1);
    se.insert(1);
    se.insert(2);
    for (auto &&i : se)
    {
        cout << i;
    }
    cout << endl;
    multiset<int> mse;
    mse.insert(3);
    mse.insert(1);
    mse.insert(1); // cho phep trung
    mse.insert(2);

    for (auto &&i : mse)
    {
        cout << i;
    }
    cout << endl;
    // unorderset insert khong theo thu tu truyen vao, khong theo thu tu lon be
    unordered_set<int> use;

    use.insert(0);
    use.insert(3);
    use.insert(1);
    use.insert(1); // cho phep
    use.insert(2);

    for (auto &&i : use)
    {
        cout << i;
    }
    cout << endl;
    // Iterator
    for (auto it = se.begin(); it != se.end(); ++it)
    {
        cout << *it;
    }
    // find() O log n
    // == > bai toan yeu cau tim kiem nhieu thi nen dung set vi co do phuc tap thap
    //  size() O 1
    cout << endl;
    auto it = se.find(3); // neu thay no se tra ve interator duyet den se.end() neu van khong tim thay
    if (it != se.end())
    {
        cout << "phan tu 3 ton tai trong set";
    }
    else
    {
        cout << "phan tu 3 khong ton tai";
    }

    // ham count dem so luong phna tu do xuat hien bao nhieu lan trog set
    if (se.count(3) != 0)
    {
        cout << "tim thay";
    }
    else
    {
        cout << "khong tim thay";
    }
    // ham erase co do phuc tap log n
    // erase trong vector co do phuc tap O n
    cout << "sau khi xoa " << endl;
    se.erase(3);
    for (auto &&i : se)
    {
        cout << i;
    }

    //erase trong multiset
    mse.erase(1);//xoa tat ca cac so 1 trong multiset
    //muon xoa 1 so 1 thoi thi dung iterrator
    //dau tien dung find de lay it cua 1
    //xoa it tim duoc
    mse.erase(mse.find(1));
// ? size O 1 //bien dem noi bo
// ? count log n 
    return 0;
}