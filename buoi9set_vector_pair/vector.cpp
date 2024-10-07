#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a; // khai bao mang vector chua biet soluong phan tu
    a.push_back(100);
    a.push_back(200);
    a.push_back(300);

    // popback
    // erase : O(n)
    // insert(chiso, value);
    cout << "size:" << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
    // iterator no thang quansat a.begin  a.end
    cout << "dung iterator" << endl;
    // hoac co the dung auto thay cho vector<int>::iterator
    for (auto iterator = a.begin(); iterator != a.end(); iterator++)
    {
        /* code */
        cout << *iterator;
    }

    // a.begin() + x => a[x]
    cout << "phan tu thu 2 la " << *(a.begin() + 2);
    // khai bao vec tor co biet so luong phan tu
    vector<int> vector10PhanTuGiaTriMacDinh100(10, 100); // co 10 ptu co gia tri mac dinh la 100
    for (int i = 0; i < vector10PhanTuGiaTriMacDinh100.size(); i++)
    {
        cout << vector10PhanTuGiaTriMacDinh100[i] << endl;
    }

    // memset
    int memA[10];
    // mem viet tat cua memory khong phai member chi gan 0 hoac -1
    memset(memA, -1, sizeof(memA));
    for (auto &&i : memA)
    {
        cout << i << endl;
    }

    // ham xoa ERASE
    vector<int> a10(10);
    for (int i = 0; i < a10.size(); i++)
    {
        /* code */
        a10[i] = i + 1;
        cout << a10[i] << ' ' << endl;
    }
    // xoa vi tri co chi so 4
    // a10.erase(a10.begin() + 4);
    // xoa doan bat dau 4 ket thuc 9

    a10.erase(a10.begin() + 4, a10.begin() + 9 + 1); //[4, 9) == > +1 ==> [4,9]
    for (int i = 0; i < a10.size(); i++)
    {
        /* code */
        cout << a10[i] << ' ' << endl;
    }

    // clear
    a10.clear();
    cout << "size: sau khi xoa" << a10.size();
    return 0;
}