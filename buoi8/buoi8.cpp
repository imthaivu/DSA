#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
// mảng đếm (dung cho cac bai toan tan suat) (dem phan phoi)
//  mang 10^6 co kich thuoc 10^6+1 do khong lay so 0 va doi cac con so ve 1 phan tu khong dung phan tu 0
//  chi dung khi data dep: so duong, < 10^7 +1
int dem[10000001] = {0};
int main()
{
    int n;
    cin >> n;
    int a[n];
    // nhap phan tu vao mang
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // cap nhat so luong phan tu trong mang dem
    for (int i = 0; i < n; i++)
    {
        dem[a[i]]++; // tang gia tri dem
    }
    //
    // dem so lan theo lan dau xuat hien
    for (int i = 0; i < n; i++)
    {
        if (dem[a[i]] != 0)
        {
            cout << a[i] << " " << dem[a[i]] << endl;
            dem[a[i]] = 0; // danh dau da dem roi
        }
    }
    //
    // dem so lan theo thu tu
    // for (int i = 0; i < 10000001; i++)
    // {
    //     if (dem[i] != 0)
    //         cout << i << ' ' << dem[i] << endl;
    // }

    return 0;
}