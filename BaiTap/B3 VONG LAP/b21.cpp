#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int remain = n % 7; // in ra so ngay du neu khong chia het cho 7
    int soNgayNghiBatBuoc = n / 7 * 2;

    // neu remain == 0
    if (remain == 0)
    {
        cout << soNgayNghiBatBuoc << " " << soNgayNghiBatBuoc;
    }
    // neu remain != 0
    else
    {
        // max
        if (remain == 1)
        {
            cout << soNgayNghiBatBuoc + 1 << " ";
        }
        else if (remain >= 2)
        {
            cout << soNgayNghiBatBuoc + 2 << " ";
        }
        // min;
        if (remain <= 5)
        {
            cout << soNgayNghiBatBuoc;
        }
        else if (remain == 6)
        {
            cout << soNgayNghiBatBuoc + 1;
        }
    }
    return 0;
}