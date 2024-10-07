#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
int firstPos(int a[], int n, int x)
{
    // tra ve vi tri dau tien cua gia tri x
    // neu khong thay -> -1
    int res = -1;
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x)
        {
            res = mid; // danh dau neu
            r = mid - 1;
        }
        else if (a[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return res;
}
int lastPos(int a[], int n, int x)
{
    // tra ve vi tri dau tien cua gia tri x
    // neu khong thay -> -1
    int res = -1;
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x)
        {
            res = mid; // danh dau neu
            l = mid + 1;
        }
        else if (a[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    int a[n];
    for (auto &&i : a)
    {
        cin >> i;
    }

    cout << firstPos(a, n, 2);
    return 0;
}