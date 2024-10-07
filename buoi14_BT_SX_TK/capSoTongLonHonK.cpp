#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
// vi tri res = -1
// neu khoang tim con lon thi tip tuc
// neu tim thay (x<a[m]) thi Luu vi tri Roi tim trai
// neu x > m thi tim phai

// tim chi so phan tu dau tien be hon x
int first(int a[], int l, int r, int x)
{
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (x < a[m])
        {
            res = m;
            r = m - 1;
        }
        else
        {
            l = m + 1;
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
        // int p1 = first(a, i + 1, n - 1, k - a[i]); // tim chi so dau tien co gia tri lon hon k
        // if (p1 != -1)
        // sum += n - p1; // vi du p = 7, n = 10, sum+=3 phan tu con lai
        auto it1 = upper_bound(a + i + 1, a + n, k - a[i]);
        sum += a + n - it1;
    }
    cout << sum;
    return 0;
}