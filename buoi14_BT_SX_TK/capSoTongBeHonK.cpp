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
    int a[n];
    int k;
    cin >> k;
    for (auto &&i : a)
    {
        cin >> i;
    }
    // 4 5
    // 2 2 2 2
    //  sap xep cac phan tu de cho cac phan tu giong nhau dung gan nhau khong phai duyet O n
    sort(a, a + n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        auto it1 = lower_bound(a + i + 1, a + n, k - a[i]); // vi tri lon hon bang
        sum += it1 - (a + i + 1);                           // tai vi it1 lan dau se = a+n
    }
    cout << sum;
    return 0;
}