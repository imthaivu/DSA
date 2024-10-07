#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
bool isThuanNghich(int n)
{
    // lat con so
    // neu lat bang chua lat thi true;

    int lat = 0;
    int tmp = n;
    while (n != 0)
    {
        lat = lat * 10 + n % 10;
        n /= 10;
    }
    return lat == tmp;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // ma tran vuong
    // duong cheo chinh
    // duong cheo phu
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    // in ra so thuan nghich bne duoi
    int count = 0;
    // cout << isThuanNghich(202);
    cout << "tam giac duoi" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i >= j; j++)
        {

            if (isThuanNghich(a[i][j]))
                count++;
        }
    }
    cout << count << endl;
    count = 0;
    cout << "tam giac tren" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j >= i && j < n; j++) // lap vo han
        {

            if (isThuanNghich(a[i][j]))
            {
                count++;
                // cout << a[i][j];
            }
        }
    } // j = 0 i = 2
    // cout << count;
    cout << isThuanNghich(4);

    return 0;
}