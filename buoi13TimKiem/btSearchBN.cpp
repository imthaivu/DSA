#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
//tim vi tri dau tien, cuoi cung

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // so luong phan tu N
    int n;
    cin >> n;
    int a[n];
    for (auto &&i : a)
    {
        cin >> i;
    }
    // dao nguoc phan tu
    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        int tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        ++l;
        --r;
    }
    //? so luong truy van Q

    // truy van 1

    // truy van 2
    int soLuongTV;
    cin >> soLuongTV;
    int b[soLuongTV];
    for (auto &&i : b)
    {
        cin >> i;
        if (binary_search(a, a + n, i))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    // do phuc tap log (10^6)* 10^3
    return 0;
}