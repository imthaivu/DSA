#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
// sort nlogn
// intro_sort() (quicksort + heapsort) : nhuoc diem mat tinh on dinh 
//(nhung cac truong hop thuc te quicksort nlogn neu gap du lieu tao n^2 thi heapsort se ra tay)
// stable_sort: (mergesort) luon on dinh nlogn 
// comparator
bool cmp(int a, int b)
{
    return a < b;
}
bool cmpAbs(int a, int b)
{
    return abs(a) > abs(b);
}
int tongCS(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += sum * 10 + n / 10;
        n /= 10;
    }
    return sum;
}
bool cmp2TieuChi(int a, int b)
{ // giam dan
    // neu thoa tieu chi nay thi return
    // neu khong thoa thi thi return
    if (tongCS(a) != tongCS(b))
        return tongCS(a) > tongCS(b);
    return a > b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for (auto &&i : a)
    {
        cin >> i;
    }
    // sau khi sort
    sort(a + 0, a + n, cmpAbs); // tai sao no khong can tham so giam dan 6 -5 4 -3 1
    // sort(a + 0, a + 2 + 1,greater<int>());//sap xep giam dan
    
    for (auto &&i : a)
    {
        cout << i << ' ';
    }
    cout << endl
         << "inter" << endl;
    // iterator
    vector<int> vi(n);
    for (auto &&i : vi)
    {
        cin >> i;
    }
    sort(vi.begin(), vi.end());
    for (auto &&i : vi)
    {
        cout << i << ' ';
    }
    // sap xep theo 2 tieu chi
    //  sort(gpa)
    //  sort(ten)
    // sap xep theo tong chu so tang dan so nao nho hon dung truoc

    return 0;
}