#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
// tim chi so phan tu dau tien
// vi tri res = -1
// neu khoang tim con lon thi tip tuc
// neu tim thay thi Luu vi tri Roi tim trai
// neu x < m thi tim trai
// neu x > m thi tim phai
int first(int a[], int l, int r, int x)
{
    int res = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x)
        {
            res = mid;
            r = mid - 1;
        }
        else if (a[mid] > x)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return res;
}
int last(int a[], int l, int r, int x)
{
    int res = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x)
        {
            res = mid;
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

    int n;
    cin >> n;
    int a[n];
    int k;
    cin >> k;
    for (auto &&i : a)
    {
        cin >> i;
    }
    // sap xep cac phan tu de cho cac phan tu giong nhau dung gan nhau khong phai duyet O n
    sort(a, a + n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int p1 = first(a, i + 1, n - 1, k - a[i]);
        if (p1 == -1) // neu p1 = -1 thi tim cap khac
            continue;
        int p2 = last(a, i + 1, n - 1, k - a[i]);
        sum += p2 - p1 + 1;
    }
    cout << sum;
    return 0;
}